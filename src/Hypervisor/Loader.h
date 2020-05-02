//
//  IProcessorLoader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include "../Core/IProcessorLoader.h"
#include "Processor.h"

namespace Hypervisor
{
    class Loader: public Core::IProcessorLoader
    {
        public:
            std::unique_ptr<Core::IProcessor> loadProcessor()
            {
                return Processor::create();
            }

            std::future<std::unique_ptr<Core::IProcessor>> loadProcessorAsync()
            {
                return std::async(std::launch::async, &Loader::loadProcessor, this);
            }

            ~Loader() {}
    };
}