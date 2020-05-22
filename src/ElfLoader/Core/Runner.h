//
//  Runner.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include <ElfLoader/Core/IProcessorLoader.h>
#include <ElfLoader/Core/IKernelLoader.h>
#include <ElfLoader/Core/IBinaryLoader.h>


namespace Core
{
    class Runner
    {
        public:
            static int process(
                Core::IProcessorLoader* processorLoader,
                Core::IKernelLoader* kernelLoader,
                    //IMPROVEMENT: Possibly support N Number of kernels, and only use the "most compatible version?"
                    // for example, use linux stubs if it fits, or use freebsd if it does?
                Core::IBinaryLoader* binaryLoader
                    //IMPROVEMENT: Possibly support N Number of binary formats, and use the "most compatible version?"
                    // for example, use elf64 if it's correct or elf32, or macho if it's correct
            );
    };
}