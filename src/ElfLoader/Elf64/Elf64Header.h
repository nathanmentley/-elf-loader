//
//  Elf64Header.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <memory>

namespace Elf64
{
    struct Elf64Header {
        uint8_t e_magic[4];
        uint8_t e_class;
        uint8_t e_data;
        uint8_t e_version;
        uint8_t e_osabi;
        uint8_t e_abiversion;
        uint8_t e_pad[7];
        uint16_t e_type;
        uint16_t e_machine;
        uint32_t e_elf_version;
        uint64_t e_entry;
        uint64_t e_phoff;
        uint64_t e_shoff;
        uint32_t e_flags;
        uint16_t e_ehsize;
        uint16_t e_phentsize;
        uint16_t e_phnum;
        uint16_t e_shentsize;
        uint16_t e_shnum;
        uint16_t e_shstrndx;
    } __attribute__((packed));
}