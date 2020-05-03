//
//  Config.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#pragma once

#include "../Core/IPluginConfig.h"

namespace Elf64
{
    class Config: public Core::IPluginConfig {
        public:
            Config(const char* _filename): filename(_filename) {}
            ~Config() {}

            const char* getFilename()
            {
                return filename;
            }
        private:
            const char* filename;
    };
}