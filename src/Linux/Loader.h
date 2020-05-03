//
//  IKernelLoader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include "../Core/BasePluginLoader.h"
#include "../Core/IKernelLoader.h"

#include "Config.h"
#include "Kernel.h"

namespace Linux
{
    class Loader:
        public Core::BasePluginLoader<Core::IKernel, Config>,
        public Core::IKernelLoader
    {
        public:
            Loader(Config* config): BasePluginLoader(config) {}

            std::unique_ptr<Core::IKernel> load()
            {
                return Kernel::create();
            }

            std::future<std::unique_ptr<Core::IKernel>> loadAsync()
            {
                return std::async(std::launch::async, &Loader::load, this);
            }

            ~Loader() {}
    };
}