//
//  IProcessorLoader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <memory>
#include <future>

#include "IProcessor.h"

namespace Core
{
    class IProcessorLoader
    {
        public:
            virtual std::unique_ptr<IProcessor> loadProcessor() = 0;
            virtual std::future<std::unique_ptr<IProcessor>> loadProcessorAsync() = 0;
            virtual ~IProcessorLoader() {}
    };
}