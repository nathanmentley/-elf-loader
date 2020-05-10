//
//  Kernel.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <memory>

#include <ElfLoader/Core/IKernel.h>

#include <ElfLoader/Linux/SystemCalls/SystemCallProcessor.h>
#include <ElfLoader/Linux/ISystemCallProcessorLoader.h>

namespace Linux
{
    class Kernel: public Core::IKernel {
        public:
            ~Kernel();
            void processInterrupt();

        private:
            friend class Loader; 

            std::unique_ptr<ISystemCallProcessor> processor;

            Kernel(Linux::ISystemCallProcessorLoader* loader);
    };
}