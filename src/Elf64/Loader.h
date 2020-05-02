//
//  Loader.h
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include "../Core/IBinaryLoader.h"

#include "Binary.h"

namespace Elf64
{
    class Loader: public Core::IBinaryLoader {
        public:
            std::future<std::unique_ptr<Core::IBinary>> loadBinaryAsync(const char* filename)
            {
                return std::async(std::launch::async, &Loader::loadBinary, this, filename);
            }

            /**
             * Loads and parses an Elf64 binary into an Elf64 representation.
             *
             * @param filename The filename of the Elf64 file to parse and load.
             * @return A unqiue pointer to an Elf64 structure.
             */
            std::unique_ptr<Core::IBinary> loadBinary(const char* filename)
            {
                return Binary::load(filename);
            }
    };
}