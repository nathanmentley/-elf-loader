//
//  main.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include <glog/logging.h>

#include <ElfLoader/Core/Exceptions/BaseException.h>
#include <ElfLoader/Core/Runner.h>
#include <ElfLoader/Elf64/Loader.h>
#include <ElfLoader/ForkProcessor/Loader.h>
#include <ElfLoader/Linux/Loader.h>

//TODO: Move logging into an interface backed system to be less coupled.
void initLogging(int argc, const char * argv[])
{
    google::InitGoogleLogging(argv[0]);
    google::SetCommandLineOption("GLOG_minloglevel", "0");
}

void shutdownLogging()
{
    google::ShutdownGoogleLogging();
}

/**
 * Entrypoint.
 *
 * @param argc number of command line arguments.
 * @param argv command line argument values.
 * @return result code of the application run
 */
int main(int argc, const char * argv[]) {
    initLogging(argc, argv);

    //TODO: Setup argument parsing.

    //TODO: Setup a plugin system.
    //  Besides the modules knowing about themselves in their code, this method is the only place that
    //  knows about anything outside of the core namespace. So if we pull these loaders dynamically,
    //  we can really keep things self contained, abstract, and configurable.

    try 
    {
        auto processorConfig = ForkProcessor::Config(); // use hypervisor processor module.
        auto binaryConfig = Elf64::Config(
            "/Users/nathan/Documents/Projects/ElfLoader/data/cat"
        ); // use elf binary module.
        auto processorLoader = ForkProcessor::Loader(&processorConfig); // use hypervisor processor module.
        auto kernelLoader = Linux::Loader(); // use linux kernel module.
        auto binaryLoader = Elf64::Loader(&binaryConfig); // use elf binary module.

        auto ret = Core::Runner::process(
            &processorLoader,
            &kernelLoader,
            &binaryLoader
        );

        shutdownLogging();

        return ret;
    }
    catch(Core::Exceptions::BaseException ex)
    {
        LOG(ERROR)
            << ex.to_string()
            << std::endl;

        return ex.get_error_code();
    }
    catch(std::exception ex)
    {
        LOG(ERROR) << "An unknown exception occured: "
            << ex.what() 
            << std::endl;

        return -1;
    }
}