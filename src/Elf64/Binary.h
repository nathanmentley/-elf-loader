//
//  Binary.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <fstream>
#include <future>
#include <iostream>
#include <memory>
#include <vector>

#include "../Core/IBinary.h"

#include "Elf64Header.h"
#include "Elf64ProgramHeader.h"
#include "Elf64SectionHeader.h"
#include "ElfParsingException.h"

namespace Elf64
{
    /**
     * A class containing data and information related to an Elf64 binary
     */
    class Binary: public Core::IBinary {
        public:
            Elf64Header header;
            std::vector<std::unique_ptr<Elf64ProgramHeader>> program_headers;
            std::vector<char> binary;
            std::vector<std::unique_ptr<Elf64SectionHeader>> section_headers;

            /**
             * Loads and parses an Elf64 binary into an Elf64 representation.
             *
             * @param filename The filename of the Elf64 file to parse and load.
             * @return A future of a unqiue pointer to an Elf64 structure.
             */
            static std::future<std::unique_ptr<Binary>> loadAsync(const char* filename)
            {
                return std::async(load, filename);
            }

            /**
             * Loads and parses an Elf64 binary into an Elf64 representation.
             *
             * @param filename The filename of the Elf64 file to parse and load.
             * @return A unqiue pointer to an Elf64 structure.
             */
            static std::unique_ptr<Binary> load(const char* filename)
            {
                std::ifstream file(filename, std::ios::binary | std::ios::ate);
                std::streamsize size = file.tellg();
                file.seekg(0, std::ios::beg);

                std::vector<char> buffer(size);
                if (file.read(buffer.data(), size))
                {
                    Elf64Header hdr;
                    std::memcpy((void*)&hdr, buffer.data(), sizeof(Elf64Header));

                    int endOfProgramHeader = sizeof(Elf64Header) + (sizeof(Elf64ProgramHeader) * hdr.e_phnum);
                    int sizeOfSectionHeaders = (sizeof(Elf64SectionHeader) * hdr.e_shnum);

                    auto ret = std::unique_ptr<Binary>(new Binary(size - endOfProgramHeader - sizeOfSectionHeaders));
                    std::memcpy(&ret->header, (void*)&hdr, sizeof(Elf64Header));

                    for(int i = 0; i < hdr.e_phnum; i++)
                    {
                        auto bufferOffset = sizeof(Elf64Header) + i * sizeof(Elf64ProgramHeader);

                        auto programHeader = std::unique_ptr<Elf64ProgramHeader>(new Elf64ProgramHeader());
                        std::memcpy(programHeader.get(), &buffer[bufferOffset], sizeof(Elf64ProgramHeader));
                        ret->program_headers.push_back(std::move(programHeader));
                    }

                    for(int i = 0; i < hdr.e_shnum; i++)
                    {
                        int bufferOffset = size - (i * sizeof(Elf64SectionHeader));

                        auto sectionHeader = std::unique_ptr<Elf64SectionHeader>(new Elf64SectionHeader());
                        std::memcpy(sectionHeader.get(), &buffer[bufferOffset], sizeof(Elf64SectionHeader));
                        ret->section_headers.push_back(std::move(sectionHeader));
                    }

                    std::copy(
                        buffer.begin() + endOfProgramHeader,
                        buffer.begin() + (size - endOfProgramHeader - sizeOfSectionHeaders),
                        ret->binary.begin()
                    );

                    return ret;
                }

                throw ElfParsingException();
            }

            void* getBinaryData()
            {
                return binary.data();
            }

            std::vector<Core::BinaryBlobDef> getBinaryBlobs()
            {
                auto ret = std::vector<Core::BinaryBlobDef>();

                for(auto const & sh: section_headers)
                {
                   ret.push_back(
                       Core::BinaryBlobDef(
                           sh->sh_size,
                           sh->sh_offset,
                           sh->sh_addr
                       )
                   );
                }

                return ret;
            }

            void printDetails()
            {
                std::cout << "\n\nelf header: \n\n"
                    << "\tclass: " << getClassName(header.e_class) << "\n"
                    << "\tmachine: " << getMachineName(header.e_machine) << "\n"
                    << "\telf version: 0x" << std::hex << +header.e_version << "\n"
                    << "\tdata: " << getDataType(header.e_data) << "\n"
                    << "\ttype: 0x" << std::hex << +header.e_type << "\n"
                    << "\tentry: 0x" << std::hex << header.e_entry << "\n"
                    << "\tph count: " << std::dec << header.e_phnum << "\n"
                    << "\tph size: " << std::dec << header.e_phentsize << "\n"
                    << "\tsh count: " << std::dec << header.e_shnum << "\n"
                    << "\tsh size: " << std::dec << header.e_shentsize << "\n\n";

                for (auto const & ph: program_headers)
                {
                    std::cout << "elf program header: \n\n";
                    std::cout << "\tp type: 0x" << std::hex << ph->p_type << "\n";
                    std::cout << "\tp offset: 0x" << std::hex << ph->p_offset << "\n\n";
                }

                for (auto const & sh: section_headers)
                {
                    std::cout << "elf section header: \n\n";
                }
            }
        private:
            /**
             * private ctor - Use load to create an instance
             */
            Binary(int binarySize): binary(binarySize) {}

            std::string getClassName(uint8_t classValue)
            {
                switch(classValue)
                {
                    case 0x1:
                        return "32bit";
                    case 0x2:
                        return "64bit";
                    default:
                        return "Invalid";
                }
            }

            std::string getMachineName(uint16_t machine)
            {
                switch(machine)
                {
                    case 0x3e:
                        return "x86_64";
                    default:
                        return "Invalid";
                }
            }

            std::string getDataType(uint8_t data)
            {
                switch(data)
                {
                    case 0x1:
                        return "Little";
                    case 0x2:
                        return "Big";
                    default:
                        return "Invalid";
                }
            }
    };
}