//
//  IProcessorLoader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include "IPluginLoader.h"
#include "IProcessor.h"
#include "IProcessorConfig.h"

namespace Core
{
    template <class TPluginConfig>
    class IProcessorLoader: public IPluginLoader<IProcessor, TPluginConfig>
    {
        public:
            IProcessorLoader()
            {
                static_assert(
                    std::is_base_of<IProcessorConfig, TPluginConfig>::value,
                    "type parameter TPluginConfig must derive from IPluginConfig"
                );
            }
            virtual ~IProcessorLoader() {}
    };
}