//
//  Loader.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include <ElfLoader/ForkProcessor/Loader.h>

ForkProcessor::Loader::Loader(Config* config): BasePluginLoader(config) {}

ForkProcessor::Loader::~Loader() {}

std::unique_ptr<Core::IProcessor> ForkProcessor::Loader::load()
{
    return std::unique_ptr<Processor>(new Processor());
}

std::future<std::unique_ptr<Core::IProcessor>> ForkProcessor::Loader::loadAsync()
{
    return std::async(std::launch::async, &Loader::load, this);
}