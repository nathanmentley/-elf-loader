//
//  ProcessorStartupException.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <ElfLoader/Core/Exceptions/ProcessorException.h>

namespace Core::Exceptions
{
    class ProcessorStartupException: public ProcessorException
    {
        public:
            ProcessorStartupException(const char* _message);

        private:
            static const uint16_t code = 0x10;
    };
}