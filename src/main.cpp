//
//  main.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include "Elf64/Loader.h"
#include "Hypervisor/Loader.h"
#include "Linux/Loader.h"

#include <unistd.h>

int process(
    const char* filename,
    Core::IProcessorLoader* processorLoader,
    Core::IKernelLoader* kernelLoader,
    Core::IBinaryLoader* binaryLoader
)
{
    auto processorTask = processorLoader->loadProcessorAsync();
    auto kernelTask = kernelLoader->loadKernelAsync();
    auto binaryTask = binaryLoader->loadBinaryAsync(filename);

    auto processor = processorTask.get();
    auto kernel = kernelTask.get();
    auto binary = binaryTask.get();

    processor->loadBinary(binary.get());

    return processor->runAsync(kernel.get()).get();
}

/**
 * Entrypoint.
 *
 * @param argc number of command line arguments.
 * @param argv command line argument values.
 * @return result code of the application run
 */
int main(int argc, const char * argv[]) {
    //TODO: Setup argument parsing.

    //TODO: Setup a plugin system.
    //  Besides the modules knowing about themselves in their code, this method is the only place that
    //  knows about anything outside of the core namespace. So if we pull these loaders dynamically,
    //  we can really keep things self contained, abstract, and configurable.
    auto processorLoader = Hypervisor::Loader(); // use hypervisor processor module.
    auto kernelLoader = Linux::Loader(); // use linux kernel module.
    auto binaryLoader = Elf64::Loader(); // use elf binary module.

    return process(
        "/Users/nathanmentley/Documents/Projects/ElfLoader/data/cat",
        &processorLoader,
        &kernelLoader,
        &binaryLoader
    );
}