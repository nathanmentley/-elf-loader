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
    Core::IProcessorLoader* processorLoader,
    Core::IKernelLoader* kernelLoader, //IMPROVEMENT: Possibly support N Number of kernels, and only use the "most compatible version?"
                            // for example, use linux stubs if it fits, or use freebsd if it does?
    Core::IBinaryLoader* binaryLoader //IMPROVEMENT: Possibly support N Number of binary formats, and use the "most compatible version?"
                            // for example, use elf64 if it's correct or macho if it's correct
)
{
    //TODO: run these in async of eachother.
    auto processor = processorLoader->loadAsync().get();
    auto kernel = kernelLoader->loadAsync().get();
    auto binary = binaryLoader->loadAsync().get();

    return processor
        ->loadBinary(binary.get())
        ->runAsync(kernel.get())
        .get();
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
    auto processorConfig = Hypervisor::Config(); // use hypervisor processor module.
    auto kernelConfig = Linux::Config(); // use linux kernel module.
    auto binaryConfig = Elf64::Config(
        "/Users/nathanmentley/Documents/Projects/ElfLoader/data/cat"
    ); // use elf binary module.
    auto processorLoader = Hypervisor::Loader(&processorConfig); // use hypervisor processor module.
    auto kernelLoader = Linux::Loader(&kernelConfig); // use linux kernel module.
    auto binaryLoader = Elf64::Loader(&binaryConfig); // use elf binary module.

    return process(
        &processorLoader,
        &kernelLoader,
        &binaryLoader
    );
}