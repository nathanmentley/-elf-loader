//
//  ProcessorException.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include <ElfLoader/Core/Exceptions/CoreException.h>

Core::Exceptions::CoreException::CoreException(
    const char* _message, const char* _type, uint16_t code
): BaseException(_message, _type, source, code) {}