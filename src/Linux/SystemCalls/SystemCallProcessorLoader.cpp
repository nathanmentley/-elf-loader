//
//  Loader.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include "SystemCallProcessorLoader.h"

Linux::SystemCalls::SystemCallProcessorLoader::~SystemCallProcessorLoader() {}

std::unique_ptr<Linux::ISystemCallProcessor> Linux::SystemCalls::SystemCallProcessorLoader::load()
{
    return std::unique_ptr<ISystemCallProcessor>(new SystemCallProcessor());
}

std::future<std::unique_ptr<Linux::ISystemCallProcessor>> Linux::SystemCalls::SystemCallProcessorLoader::loadAsync()
{
    return std::async(std::launch::async, &SystemCallProcessorLoader::load, this);
}