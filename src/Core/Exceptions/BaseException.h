//
//  BaseException.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <exception>

namespace Core::Exceptions
{
    class BaseException: public std::exception
    {
        public:
            virtual const char* what() const throw();
            const uint32_t ErrorCode;

        protected:
            BaseException(const char* _message, uint16_t _source, uint16_t _code);

        private:
            const char* message;
            const uint16_t source;
            const uint16_t code;
    };
}