//
//  Elf64SectionHeader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <exception>

namespace Elf64
{
    class ElfParsingException: public std::exception
    {
        virtual const char* what() const throw();
    };
}