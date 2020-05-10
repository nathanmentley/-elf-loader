//
//  Loader.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include <ElfLoader/Elf64/Loader.h>

Elf64::Loader::Loader(Config* config): BasePluginLoader(config) {}

std::future<std::unique_ptr<Core::IBinary>> Elf64::Loader::loadAsync()
{
    return std::async(std::launch::async, &Loader::load, this);
}

std::unique_ptr<Core::IBinary> Elf64::Loader::load()
{
    return Binary::load(config->getFilename());
}