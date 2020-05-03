//
//  IProcessorLoader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include "../Core/BasePluginLoader.h"
#include "../Core/IProcessorLoader.h"

#include "Config.h"
#include "Processor.h"

namespace Hypervisor
{
    class Loader:
        public Core::BasePluginLoader<Core::IProcessor, Config>,
        public Core::IProcessorLoader
    {
        public:
            Loader(Config* config): BasePluginLoader(config) {}

            std::unique_ptr<Core::IProcessor> load()
            {
                return std::unique_ptr<Processor>(new Processor());
            }

            std::future<std::unique_ptr<Core::IProcessor>> loadAsync()
            {
                return std::async(std::launch::async, &Loader::load, this);
            }

            ~Loader() {}
    };
}