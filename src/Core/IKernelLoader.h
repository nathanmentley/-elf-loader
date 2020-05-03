//
//  IKernelLoader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include "IKernel.h"
#include "IKernelConfig.h"
#include "IPluginLoader.h"

namespace Core
{
    template <class TPluginConfig>
    class IKernelLoader: public IPluginLoader<IKernel, TPluginConfig>
    {
        public:
            IKernelLoader()
            {
                static_assert(
                    std::is_base_of<IKernelConfig, TPluginConfig>::value,
                    "type parameter TPluginConfig must derive from IPluginConfig"
                );
            }
            virtual ~IKernelLoader() {}
    };
}