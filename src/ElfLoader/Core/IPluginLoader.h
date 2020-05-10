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

#include <ElfLoader/Core/IPlugin.h>
#include <ElfLoader/Core/IPluginConfig.h>

namespace Core
{
    template <class TPlugin>
    class IPluginLoader
    {
        public:
            IPluginLoader() {
                static_assert(
                    std::is_base_of<IPlugin, TPlugin>::value,
                    "type parameter TPlugin must derive from IPlugin"
                );
            }

            virtual std::unique_ptr<TPlugin> load() = 0;
            virtual std::future<std::unique_ptr<TPlugin>> loadAsync() = 0;

            virtual ~IPluginLoader() {}
    };
}