//
//  IProcessor.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <future>

#include <ElfLoader/Core/IBinary.h>
#include <ElfLoader/Core/IKernel.h>
#include <ElfLoader/Core/IPlugin.h>

namespace Core
{
    class IProcessor: public IPlugin
    {
        public:
            virtual IProcessor* withBinary(IBinary* binary) = 0;
            virtual std::future<int> runAsync(IKernel* kernel) = 0;
            virtual int run(IKernel* kernel) = 0;
            virtual ~IProcessor() {}
    };
}