//
//  Kernel.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include "../Core/IKernel.h"

namespace Linux
{
    class Kernel: public Core::IKernel {
        public:
            ~Kernel() {}
        private:
            friend class Loader; 

            Kernel() {}
    };
}