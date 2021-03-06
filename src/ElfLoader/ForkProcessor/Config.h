//
//  Config.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <ElfLoader/Core/IPluginConfig.h>

namespace ForkProcessor
{
    class Config: public Core::IPluginConfig {
        public:
            Config();
            ~Config();
    };
}