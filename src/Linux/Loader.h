//
//  Loader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include "../Core/IKernelLoader.h"

#include "ISystemCallProcessorLoader.h"

#include "Kernel.h"

namespace Linux
{
    class Loader:
        public Core::IKernelLoader
    {
        public:
            Loader();
            ~Loader();

            std::unique_ptr<Core::IKernel> load();

            std::future<std::unique_ptr<Core::IKernel>> loadAsync();

        private:
            std::unique_ptr<ISystemCallProcessorLoader> systemCallProcessorLoader;
    };
}