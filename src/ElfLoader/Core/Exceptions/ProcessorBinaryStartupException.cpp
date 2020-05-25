//
//  ProcessorBinaryStartupException.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include <ElfLoader/Core/Exceptions/ProcessorBinaryStartupException.h>

Core::Exceptions::ProcessorBinaryStartupException::ProcessorBinaryStartupException(
    const char* _message
): ProcessorException(_message, "ProcessorBinaryStartupException", code) {}