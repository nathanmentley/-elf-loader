//
//  IKernelLoader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <memory>
#include <future>

#include "IKernel.h"

namespace Core
{
    class IKernelLoader
    {
        public:
            virtual std::unique_ptr<IKernel> loadKernel() = 0;
            virtual std::future<std::unique_ptr<IKernel>> loadKernelAsync() = 0;
            virtual ~IKernelLoader() {}
    };
}