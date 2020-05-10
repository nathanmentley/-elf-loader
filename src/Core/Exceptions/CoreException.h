//
//  ProcessorException.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include "BaseException.h"

namespace Core::Exceptions
{
    class CoreException: public BaseException
    {
        protected:
            CoreException(const char* _message, uint16_t code):
                BaseException(_message, source, code) {}

        private:
            static const uint16_t source = 0x10;
    };
}