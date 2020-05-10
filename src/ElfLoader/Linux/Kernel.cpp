//
//  Kernel.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include <ElfLoader/Linux/Kernel.h>

Linux::Kernel::Kernel(Linux::ISystemCallProcessorLoader* processorLoader):
    processor(
        processorLoader->load()
    ) {}

Linux::Kernel::~Kernel() {}

void Linux::Kernel::processInterrupt()
{
    processor->process(sys_open);
}