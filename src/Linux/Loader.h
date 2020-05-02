//
//  IKernelLoader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include "../Core/IKernelLoader.h"
#include "Kernel.h"

namespace Linux
{
    class Loader: public Core::IKernelLoader
    {
        public:
            std::unique_ptr<Core::IKernel> loadKernel()
            {
                return Kernel::create();
            }

            std::future<std::unique_ptr<Core::IKernel>> loadKernelAsync()
            {
                return std::async(std::launch::async, &Loader::loadKernel, this);
            }

            ~Loader() {}
    };
}