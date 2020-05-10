//
//  Loader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include "../ISystemCallProcessorLoader.h"

#include "SystemCallProcessor.h"

namespace Linux::SystemCalls
{
    class SystemCallProcessorLoader:
        public ISystemCallProcessorLoader
    {
        public:
            std::unique_ptr<ISystemCallProcessor> load();

            std::future<std::unique_ptr<ISystemCallProcessor>> loadAsync();

            ~SystemCallProcessorLoader();
    };
}