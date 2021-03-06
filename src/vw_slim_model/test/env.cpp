// Copyright (c) Microsoft Corporation.
// Licensed under the MIT License.

#include "env.hpp"

#include <fstream>
#include <iostream>
#include <string>
#include <vector>

namespace resonance_vw_test {
std::string test_dir_path;

std::vector<char> all_bytes(std::string path) {
    std::ifstream stream(path, std::ios::binary | std::ios::ate);
    auto length = stream.tellg();
    stream.seekg(0, std::ios::beg);
    std::vector<char> data(length);
    stream.read(&data[0], length);
    stream.close();
    return data;
}

}  // namespace resonance_vw_test