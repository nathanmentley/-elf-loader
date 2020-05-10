//
//  IKernel.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <ElfLoader/Core/IPlugin.h>

namespace Core
{
    class IKernel: public IPlugin
    {
        public:
            virtual ~IKernel() {}

            virtual void processInterrupt() = 0;
    };
}