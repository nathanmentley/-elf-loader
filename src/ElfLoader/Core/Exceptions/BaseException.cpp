//
//  BaseException.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include <ElfLoader/Core/Exceptions/BaseException.h>

Core::Exceptions::BaseException::BaseException(const char* _message, uint16_t _source, uint16_t _code):
    message(_message),
    source(_source),
    code(_code),
    ErrorCode((_source << 16) + _code)
{
}

const char* Core::Exceptions::BaseException::what() const throw()
{
    return message;
}