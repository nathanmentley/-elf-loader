//
//  ProcessorStartupException.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <exception>

namespace Core::Exceptions
{
    class ProcessorException: public std::exception
    {
        virtual const char* what() const throw() = 0;
    };
}