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
    Core::IProcessor* processor,
    Core::IKernel* kernel,
    Core::IBinary* binary
)
{
    processor->loadBinary(binary);

    return processor->runAsync(kernel).get();
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
    auto processorConfig = Hypervisor::Config(); // use hypervisor processor module.
    auto kernelConfig = Linux::Config(); // use linux kernel module.
    auto binaryConfig = Elf64::Config(
        "/Users/nathanmentley/Documents/Projects/ElfLoader/data/cat"
    ); // use elf binary module.

    //TODO: run these in async of eachother.
    auto processor = processorLoader.loadAsync(&processorConfig).get();
    auto kernel = kernelLoader.loadAsync(&kernelConfig).get();
    auto binary = binaryLoader.loadAsync(&binaryConfig).get();

    return process(
        processor.get(),
        kernel.get(),
        binary.get()
    );
}