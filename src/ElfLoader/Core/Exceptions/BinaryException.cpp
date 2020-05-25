//
// BinaryException.cpp 
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include <ElfLoader/Core/Exceptions/BinaryException.h>

Core::Exceptions::BinaryException::BinaryException(const char* _message, uint16_t code):
    BaseException(_message, "BinaryException", source, code) {}