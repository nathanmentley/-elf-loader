//
//  Runner.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include <ElfLoader/Core/Runner.h>

int Core::Runner::process(
    Core::IProcessorLoader* processorLoader,
    Core::IKernelLoader* kernelLoader,
    Core::IBinaryLoader* binaryLoader
)
{
    auto binaryTask = binaryLoader->loadAsync();
    auto processorTask = processorLoader->loadAsync();
    auto kernelTask = kernelLoader->loadAsync();

    auto binary = binaryTask.get();
    auto processor = processorTask.get();
    auto kernel = kernelTask.get();

    auto resultTask = processor
        ->loadBinary(binary.get())
        ->runAsync(kernel.get());

    return resultTask.get();
}