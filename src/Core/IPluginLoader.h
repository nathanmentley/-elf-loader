//
//  IPluginLoader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <memory>
#include <future>

#include "IPlugin.h"
#include "IPluginConfig.h"

namespace Core
{
    template <class TPlugin, class TPluginConfig>
    class IPluginLoader
    {
        public:
            IPluginLoader() {
                static_assert(
                    std::is_base_of<IPlugin, TPlugin>::value,
                    "type parameter TPlugin must derive from IPlugin"
                );
                static_assert(
                    std::is_base_of<IPluginConfig, TPluginConfig>::value,
                    "type parameter TPluginConfig must derive from IPluginConfig"
                );
            }

            virtual std::unique_ptr<TPlugin> load(TPluginConfig* config) = 0;
            virtual std::future<std::unique_ptr<TPlugin>> loadAsync(TPluginConfig* config) = 0;
            virtual ~IPluginLoader() {}
    };
}