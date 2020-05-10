//
//  Elf64SectionHeader.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include <ElfLoader/Elf64/ElfParsingException.h>

const char* Elf64::ElfParsingException::what() const throw()
{
    return "An unknown Elf parsing exception occured";
}