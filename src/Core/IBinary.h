//
//  IBinary.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <vector>

#include "BinaryBlobDef.h"
#include "IPlugin.h"

namespace Core
{
    class IBinary: public IPlugin
    {
        public:
            virtual void printDetails() = 0;

            virtual void* getBinaryData() = 0;
            virtual std::vector<BinaryBlobDef> getBinaryBlobs() = 0;

            virtual ~IBinary() {}
    };
}