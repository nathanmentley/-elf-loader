//
//  BaseException.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include <ElfLoader/Core/Exceptions/BaseException.h>

Core::Exceptions::BaseException::BaseException(
    const char* _message,
    const char* _type,
    uint16_t _source,
    uint16_t _code
):
    message(_message),
    type(_type),
    source(_source),
    code(_code),
    error_code((_source << 16) + _code),
    stacktrace(boost::stacktrace::stacktrace()) {}

const char* Core::Exceptions::BaseException::what() const throw()
{
    return message;
}

const char* Core::Exceptions::BaseException::get_type()
{
    return type;
}

boost::stacktrace::stacktrace Core::Exceptions::BaseException::get_stacktrace()
{
    return stacktrace;
}

const uint32_t Core::Exceptions::BaseException::get_error_code()
{
    return error_code;
}

std::string Core::Exceptions::BaseException::to_string()
{
    std::stringstream ss;

    ss << "An exception of type ["
        << "\033[1;31m"
        << type
        << "\033[0m"
        << "] and code ["
        << "\033[1;33m"
        << error_code
        << "\033[0m"
        << "] occured with the message: "
        << "\033[1;36m"
        << message
        << "\033[0m"
        << std::endl
        << std::endl
        << "\033[1;34m"
        << stacktrace
        << "\033[0m";

    return ss.str();
}