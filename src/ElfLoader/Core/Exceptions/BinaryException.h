//
//  BinaryException.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <ElfLoader/Core/Exceptions/BaseException.h>

namespace Core::Exceptions
{
    class BinaryException: public BaseException
    {
        protected:
            BinaryException(const char* _message, uint16_t code);

        private:
            static const uint16_t source = 0x20;
    };
}