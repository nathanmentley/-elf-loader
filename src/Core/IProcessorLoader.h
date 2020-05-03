//
//  IProcessorLoader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include "IPluginLoader.h"
#include "IProcessor.h"

namespace Core
{
    class IProcessorLoader: public IPluginLoader<IProcessor>
    {
        public:
            IProcessorLoader() {}
            virtual ~IProcessorLoader() {}
    };
}