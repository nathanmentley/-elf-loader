//
//  Loader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include "../Core/BasePluginLoader.h"
#include "../Core/IBinaryLoader.h"

#include "Binary.h"
#include "Config.h"

namespace Elf64
{
    class Loader:
        public Core::BasePluginLoader<Core::IBinary, Config>,
        public Core::IBinaryLoader
    {
        public:
            Loader(Config* config): BasePluginLoader(config) {}

            std::future<std::unique_ptr<Core::IBinary>> loadAsync()
            {
                return std::async(std::launch::async, &Loader::load, this);
            }

            std::unique_ptr<Core::IBinary> load()
            {
                return Binary::load(config->getFilename());
            }
    };
}