//
//  Loader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include "../Core/IBinaryLoader.h"

#include "Binary.h"
#include "Config.h"

namespace Elf64
{
    class Loader: public Core::IBinaryLoader<Config> {
        public:
            std::future<std::unique_ptr<Core::IBinary>> loadAsync(Config* config)
            {
                return std::async(std::launch::async, &Loader::load, this, config);
            }

            std::unique_ptr<Core::IBinary> load(Config* config)
            {
                return Binary::load(config->getFilename());
            }
    };
}