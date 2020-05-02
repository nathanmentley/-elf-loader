//
//  IBinaryLoader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <memory>
#include <future>

#include "IBinary.h"

namespace Core
{
    class IBinaryLoader
    {
        public:
            virtual std::unique_ptr<IBinary> loadBinary(const char* filename) = 0;
            virtual std::future<std::unique_ptr<IBinary>> loadBinaryAsync(const char* filename) = 0;
            virtual ~IBinaryLoader() {}
    };
}