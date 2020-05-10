//
//  IKernelLoader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <ElfLoader/Core/IKernel.h>
#include <ElfLoader/Core/IPluginLoader.h>

namespace Core
{
    class IKernelLoader: public IPluginLoader<IKernel>
    {
        public:
            IKernelLoader() {}
            virtual ~IKernelLoader() {}
    };
}