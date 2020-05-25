//
//  ProcessorStartupException.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include <ElfLoader/Core/Exceptions/ProcessorStartupException.h>

Core::Exceptions::ProcessorStartupException::ProcessorStartupException(
    const char* _message
): ProcessorException(_message, "ProcessorStartupException", code) {}