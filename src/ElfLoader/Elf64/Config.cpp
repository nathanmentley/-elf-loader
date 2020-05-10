//
//  Config.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include <ElfLoader/Elf64/Config.h>

Elf64::Config::Config(const char* _filename): filename(_filename) {}
Elf64::Config::~Config() {}

const char* Elf64::Config::getFilename()
{
    return filename;
}