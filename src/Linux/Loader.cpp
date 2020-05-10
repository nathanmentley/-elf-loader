//
//  Loader.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include "Loader.h"
#include "SystemCalls/SystemCallProcessorLoader.h"

Linux::Loader::Loader():
    systemCallProcessorLoader(
        std::unique_ptr<ISystemCallProcessorLoader>(
            new SystemCalls::SystemCallProcessorLoader()
        )
    ) {}

Linux::Loader::~Loader() {}

std::unique_ptr<Core::IKernel> Linux::Loader::load()
{
    return std::unique_ptr<Kernel>(new Kernel(systemCallProcessorLoader.get()));
}

std::future<std::unique_ptr<Core::IKernel>> Linux::Loader::loadAsync()
{
    return std::async(std::launch::async, &Loader::load, this);
}