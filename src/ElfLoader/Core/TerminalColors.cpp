//
//  TerminalColors.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include <ElfLoader/Core/TerminalColors.h>

const char* Core::TerminalColors::ErrorFormatting = "\033[1;31m";
const char* Core::TerminalColors::InfoFormatting = "\033[1;34m";
const char* Core::TerminalColors::ClearFormatting = "\033[0m";