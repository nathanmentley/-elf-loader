
//
//  Processor.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <iostream>
#include <mach/mach.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

#include <ElfLoader/Core/Exceptions/ProcessorBinaryShutdownException.h>
#include <ElfLoader/Core/Exceptions/ProcessorBinaryStartupException.h>
#include <ElfLoader/Core/Exceptions/ProcessorStartupException.h>
#include <ElfLoader/Core/IProcessor.h>

#include <ElfLoader/ForkProcessor/Bootloader.h>

namespace ForkProcessor
{
    /**
     * A class that Implemented IProcessor, and can setup and execute an IBinary given an IKernel.
     */
    class Processor: public Core::IProcessor {
        public:
            ~Processor();

            IProcessor* loadBinary(Core::IBinary* binary);

            std::future<int> runAsync(Core::IKernel* kernel);

            int run(Core::IKernel* kernel);
        private:
            friend class Loader; 

            Processor();
            
            Bootloader bootloader;

            static pid_t startChildProcess();

            static void childProcessStartup();

            void writeMemoryToPid(int pid, size_t len, vm_address_t src_addr, vm_address_t dest_addr);
    };
}