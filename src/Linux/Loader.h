//
//  IKernelLoader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include "../Core/IKernelLoader.h"

#include "Config.h"
#include "Kernel.h"

namespace Linux
{
    class Loader: public Core::IKernelLoader<Config>
    {
        public:
            std::unique_ptr<Core::IKernel> load(Config* config)
            {
                return Kernel::create();
            }

            std::future<std::unique_ptr<Core::IKernel>> loadAsync(Config* config)
            {
                return std::async(std::launch::async, &Loader::load, this, config);
            }

            ~Loader() {}
    };
}