//
//  IProcessorLoader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include "../Core/IProcessorLoader.h"

#include "Config.h"
#include "Processor.h"

namespace Hypervisor
{
    class Loader: public Core::IProcessorLoader<Config>
    {
        public:
            std::unique_ptr<Core::IProcessor> load(Config* config)
            {
                return Processor::create();
            }

            std::future<std::unique_ptr<Core::IProcessor>> loadAsync(Config* config)
            {
                return std::async(std::launch::async, &Loader::load, this, config);
            }

            ~Loader() {}
    };
}