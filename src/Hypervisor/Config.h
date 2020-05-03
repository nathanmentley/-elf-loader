//
//  Config.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include "../Core/IProcessorConfig.h"

namespace Hypervisor
{
    class Config: public Core::IProcessorConfig {
        public:
            Config()
            {
            }
            ~Config()
            {
            }
    };
}