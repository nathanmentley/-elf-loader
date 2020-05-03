//
//  ProcessorStartupException.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <exception>

#include "ProcessorException.h"

namespace Core::Exceptions
{
    class ProcessorBinaryStartupException: public ProcessorException
    {
        virtual const char* what() const throw()
        {
            return "Processor could not startup";
        }
    };
}