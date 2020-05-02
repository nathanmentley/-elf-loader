//
//  Elf64SectionHeader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <vector>

namespace Elf64
{
    struct Elf64SectionHeader {
        uint32_t sh_name;
        uint32_t sh_type;
        uint64_t sh_flags;
        uint64_t sh_addr;
        uint64_t sh_offset;
        uint64_t sh_size;
        uint64_t sh_addralign;
        uint64_t sh_entsize;
    } __attribute__((packed));
}