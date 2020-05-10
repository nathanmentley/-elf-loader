//
//  Binary.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include "Binary.h"

char* Elf64::Binary::getEntryPoint()
{
    return (char*)header.e_entry;
}

char* Elf64::Binary::getBinaryData()
{
    return binary.data();
}

std::vector<Core::BinaryBlobDef> Elf64::Binary::getBinaryBlobs()
{
    auto ret = std::vector<Core::BinaryBlobDef>();

    for(auto const & sh: section_headers)
    {
        if (sh->sh_type != 0x1)
            continue;

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

void Elf64::Binary::printDetails()
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
        std::cout << "\ttype: 0x" << std::hex << sh->sh_type << "\n";
        std::cout << "\toffset: 0x" << std::hex << sh->sh_offset << "\n";
        std::cout << "\taddr: 0x" << std::hex << sh->sh_addr << "\n";
        std::cout << "\tsize: " << std::dec << sh->sh_size << "\n";
    }
}

Elf64::Binary::Binary(int binarySize): binary(binarySize) {}

std::unique_ptr<Elf64::Binary> Elf64::Binary::load(const char* filename)
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

        auto ret = std::unique_ptr<Binary>(new Binary(size));
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
            buffer.begin(),
            buffer.end(),
            ret->binary.begin()
        );

        return ret;
    }

    throw ElfParsingException();
}

std::string Elf64::Binary::getClassName(uint8_t classValue)
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

std::string Elf64::Binary::getMachineName(uint16_t machine)
{
    switch(machine)
    {
        case 0x3e:
            return "x86_64";
        default:
            return "Invalid";
    }
}

std::string Elf64::Binary::getDataType(uint8_t data)
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