//
//  Loader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <ElfLoader/Core/BasePluginLoader.h>
#include <ElfLoader/Core/IProcessorLoader.h>

#include <ElfLoader/ForkProcessor/Config.h>
#include <ElfLoader/ForkProcessor/Processor.h>

namespace ForkProcessor
{
    class Loader:
        public Core::BasePluginLoader<Core::IProcessor, Config>,
        public Core::IProcessorLoader
    {
        public:
            Loader(Config* config);

            std::unique_ptr<Core::IProcessor> load();

            std::future<std::unique_ptr<Core::IProcessor>> loadAsync();

            ~Loader();
    };
}