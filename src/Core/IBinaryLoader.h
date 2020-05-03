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
#include "IPluginLoader.h"

namespace Core
{
    class IBinaryLoader: public IPluginLoader<IBinary>
    {
        public:
            IBinaryLoader() {}
            virtual ~IBinaryLoader() {}
    };
}