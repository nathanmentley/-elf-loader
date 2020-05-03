//
//  IBinaryConfig.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include "IPluginConfig.h"

namespace Core
{
    class IBinaryConfig: public IPluginConfig
    {
        public:
            virtual ~IBinaryConfig() {}
    };
}