
//
//  Processor.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include "Processor.h"

ForkProcessor::Processor::~Processor() {}

Core::IProcessor* ForkProcessor::Processor::loadBinary(Core::IBinary* binary)
{
    binary->printDetails();

    auto childPid = startChildProcess();

    if(childPid != 0)
    {
        std::cout << "child process running on: " << childPid << std::endl;

        for(auto blob: binary->getBinaryBlobs())
        {
            std::cout << "Loading binary blob to pid: " << childPid << std::endl;
            writeMemoryToPid(childPid, blob.length, blob.source, blob.target);
        }
    }

    return this;
}

std::future<int> ForkProcessor::Processor::runAsync(Core::IKernel* kernel)
{
    return std::async(std::launch::async, &Processor::run, this, kernel);
}

int ForkProcessor::Processor::run(Core::IKernel* kernel)
{
    return 0;
}

ForkProcessor::Processor::Processor():
    bootloader(Bootloader())
{
}

pid_t ForkProcessor::Processor::startChildProcess()
{
    auto pid = fork();

    if(pid == 0)
    {
        childProcessStartup();
        //after we've setup the process, abort to get back to the parent process.
        abort();
    }

    return pid;
}

void ForkProcessor::Processor::childProcessStartup()
{
}

void ForkProcessor::Processor::writeMemoryToPid(int pid, size_t len, vm_address_t src_addr, vm_address_t dest_addr)
{
    mach_port_t process_to_write;
    kern_return_t error;

    if((error = task_for_pid(mach_task_self(), pid, &process_to_write)) != KERN_SUCCESS)
        throw Core::Exceptions::ProcessorBinaryStartupException(
            "Error getting the process"
        );

    if((error = vm_write(process_to_write, dest_addr, src_addr, len)) != KERN_SUCCESS)
        throw Core::Exceptions::ProcessorBinaryStartupException(
            "Error writing to the process"
        );
}