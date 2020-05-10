//
//  IProcessorLoader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <ElfLoader/Core/IPluginLoader.h>
#include <ElfLoader/Core/IProcessor.h>

namespace Core
{
    class IProcessorLoader: public IPluginLoader<IProcessor>
    {
        public:
            IProcessorLoader() {}
            virtual ~IProcessorLoader() {}
    };
}