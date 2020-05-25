//
//  KernelException.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <ElfLoader/Core/Exceptions/BaseException.h>

namespace Core::Exceptions
{
    class KernelException: public BaseException
    {
        protected:
            KernelException(const char* _message, const char* _type, uint16_t code);

        private:
            static const uint16_t source = 0x40;
    };
}