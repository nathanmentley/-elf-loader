//
//  Bootloader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include <memory>

namespace ForkProcessor
{
    class Bootloader {
        public:
            Bootloader();
            ~Bootloader();

            int GetLength();

            char* GetData();

        private:
            static const int length;

            static const unsigned char data[];
    };
}