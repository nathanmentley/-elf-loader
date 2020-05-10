//
//  Binary.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <fstream>
#include <iostream>
#include <memory>
#include <vector>

#include <ElfLoader/Core/IBinary.h>

#include <ElfLoader/Elf64/Elf64Header.h>
#include <ElfLoader/Elf64/Elf64ProgramHeader.h>
#include <ElfLoader/Elf64/Elf64SectionHeader.h>
#include <ElfLoader/Elf64/ElfParsingException.h>

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

            char* getEntryPoint();
            char* getBinaryData();
            std::vector<Core::BinaryBlobDef> getBinaryBlobs();
            void printDetails();

        private:
            friend class Loader; 

            Binary(int binarySize);

            /**
             * Loads and parses an Elf64 binary into an Elf64 representation.
             *
             * @param filename The filename of the Elf64 file to parse and load.
             * @return A unqiue pointer to an Elf64 structure.
             */
            static std::unique_ptr<Binary> load(const char* filename);
            std::string getClassName(uint8_t classValue);
            std::string getMachineName(uint16_t machine);
            std::string getDataType(uint8_t data);
    };
}