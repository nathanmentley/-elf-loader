//
//  BasePluginLoader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <ElfLoader/Core/IPluginLoader.h>

namespace Core
{
    template <class TPlugin, class TPluginConfig>
    class BasePluginLoader: public IPluginLoader<TPlugin>
    {
        public:
            BasePluginLoader(TPluginConfig* _config): config(_config)
            {
                static_assert(
                    std::is_base_of<IPluginConfig, TPluginConfig>::value,
                    "type parameter TPluginConfig must derive from IPluginConfig"
                );
            }
            virtual ~BasePluginLoader() {}
        protected:
            TPluginConfig* config;
    };
}