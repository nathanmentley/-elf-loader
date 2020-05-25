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
        << Core::TerminalColors::WithErrorFormatting(type)
        << "] and code ["
        << Core::TerminalColors::WithErrorFormatting(error_code)
        << "] occured with the message: "
        << Core::TerminalColors::WithInfoFormatting(message)
        << std::endl
        << std::endl
        << "Stacktrace:"
        << std::endl
        << Core::TerminalColors::WithInfoFormatting(stacktrace);

    return ss.str();
}