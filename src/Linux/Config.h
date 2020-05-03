//
//  Config.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include "../Core/IKernelConfig.h"

namespace Linux
{
    class Config: public Core::IKernelConfig {
        public:
            Config()
            {
            }
            ~Config()
            {
            }
    };
}