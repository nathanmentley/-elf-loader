//
//  ISystemCallProcessor.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include "../Core/IPlugin.h"

#include "SystemCall.h"

namespace Linux
{
    class ISystemCallProcessor: public Core::IPlugin
    {
        public:
            virtual ~ISystemCallProcessor() {}

            virtual void process(SystemCall call) = 0;
    };
}