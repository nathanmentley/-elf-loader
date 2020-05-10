//
//  Loader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include <ElfLoader/Core/BasePluginLoader.h>
#include <ElfLoader/Core/IBinaryLoader.h>

#include <ElfLoader/Elf64/Binary.h>
#include <ElfLoader/Elf64/Config.h>

namespace Elf64
{
    class Loader:
        public Core::BasePluginLoader<Core::IBinary, Config>,
        public Core::IBinaryLoader
    {
        public:
            Loader(Config* config);

            std::future<std::unique_ptr<Core::IBinary>> loadAsync();

            std::unique_ptr<Core::IBinary> load();
    };
}