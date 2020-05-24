//
//  BaseException.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <exception>
#include <sstream>
#include <string>

#define BOOST_STACKTRACE_GNU_SOURCE_NOT_REQUIRED
#include <boost/stacktrace.hpp>

namespace Core::Exceptions
{
    class BaseException: public std::exception
    {
        public:
            virtual const char* what() const throw();

            boost::stacktrace::stacktrace get_stacktrace();
            const char* get_type();
            const uint32_t get_error_code();
            std::string to_string();

        protected:
            BaseException(
                const char* _message,
                const char* _type,
                uint16_t _source,
                uint16_t _code
            );

        private:
            boost::stacktrace::stacktrace stacktrace;
            const char* type;
            const char* message;
            const uint16_t source;
            const uint16_t code;
            const uint32_t error_code;
    };
}