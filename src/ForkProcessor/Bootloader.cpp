//
//  Bootloader.cpp
//  elf-loader
//
//  Created by Nathan Mentley on 4/29/20.
//  Copyright © 2020 Nathan Mentley. All rights reserved.
//

#include "Bootloader.h"

ForkProcessor::Bootloader::Bootloader() {}

ForkProcessor::Bootloader::~Bootloader() {}

char* ForkProcessor::Bootloader::GetData() {
    return 0;
}

int ForkProcessor::Bootloader::GetLength() {
    return length;
}

const int ForkProcessor::Bootloader::length = 228;

const unsigned char ForkProcessor::Bootloader::data[] = {
    0x48, 0x89, 0x3d, 0xbd, 0x00, 0x00, 0x00, 0x48, 0x89, 0x35, 0xbe, 0x00,
    0x00, 0x00, 0x48, 0x89, 0x15, 0xbf, 0x00, 0x00, 0x00, 0x48, 0x89, 0x0d,
    0xc0, 0x00, 0x00, 0x00, 0x4c, 0x8b, 0x25, 0xa1, 0x00, 0x00, 0x00, 0x49,
    0x8b, 0x0c, 0x24, 0x49, 0x83, 0xc4, 0x08, 0x4d, 0x8b, 0x34, 0x24, 0x49,
    0x83, 0xc4, 0x08, 0x49, 0x8b, 0x3c, 0x24, 0x49, 0x83, 0xc4, 0x08, 0x49,
    0x8b, 0x34, 0x24, 0x49, 0x83, 0xc4, 0x08, 0x51, 0x49, 0x89, 0xfd, 0x49,
    0x83, 0xfe, 0x00, 0x74, 0x0f, 0xb8, 0x0b, 0x00, 0x00, 0x00, 0x48, 0x89,
    0xff, 0x48, 0x89, 0xf6, 0x0f, 0x05, 0xeb, 0x25, 0xb8, 0x09, 0x00, 0x00,
    0x00, 0x48, 0x89, 0xff, 0x48, 0x89, 0xf6, 0xba, 0x06, 0x00, 0x00, 0x00,
    0x41, 0xba, 0x32, 0x00, 0x00, 0x00, 0x49, 0xc7, 0xc0, 0xff, 0xff, 0xff,
    0xff, 0x41, 0xb9, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x05, 0x59, 0xe2, 0xa7,
    0xb8, 0x27, 0x00, 0x00, 0x00, 0x0f, 0x05, 0x48, 0x89, 0xc7, 0xb8, 0x3e,
    0x00, 0x00, 0x00, 0x48, 0x89, 0xff, 0xbe, 0x13, 0x00, 0x00, 0x00, 0x0f,
    0x05, 0x48, 0x8b, 0x25, 0x30, 0x00, 0x00, 0x00, 0xba, 0x00, 0x00, 0x00,
    0x00, 0xbd, 0x00, 0x00, 0x00, 0x00, 0x4c, 0x8b, 0x0d, 0x27, 0x00, 0x00,
    0x00, 0x41, 0x51, 0xff, 0x25, 0x0f, 0x00, 0x00, 0x00, 0xb8, 0x3c, 0x00,
    0x00, 0x00, 0x0f, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};