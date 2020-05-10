//
//  IProcessorLoader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <ElfLoader/Core/IBinaryLoader.h>

#include <ElfLoader/Linux/ISystemCallProcessor.h>

namespace Linux
{
    class ISystemCallProcessorLoader: public Core::IPluginLoader<ISystemCallProcessor>
    {
        public:
            ISystemCallProcessorLoader() {}
            virtual ~ISystemCallProcessorLoader() {}
    };
}