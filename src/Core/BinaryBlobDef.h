//
//  BinaryBlobDef.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <vector>

namespace Core
{
    struct BinaryBlobDef
    {
        uint64_t length;
        uint64_t source;
        uint64_t target;
    };
}