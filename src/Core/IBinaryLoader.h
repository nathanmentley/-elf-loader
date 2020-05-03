//
//  IBinaryLoader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <memory>
#include <future>

#include "IBinary.h"
#include "IBinaryConfig.h"
#include "IPluginLoader.h"

namespace Core
{
    template <class TPluginConfig>
    class IBinaryLoader: public IPluginLoader<IBinary, TPluginConfig>
    {
        public:
            IBinaryLoader()
            {
                static_assert(
                    std::is_base_of<IBinaryConfig, TPluginConfig>::value,
                    "type parameter TPluginConfig must derive from IPluginConfig"
                );
            }
            virtual ~IBinaryLoader() {}
    };
}