#include <string>
#include <cstdint>

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

namespace func {
    std::string txt_file_to_str(std::string file_path);
    int64_t find_greatest_product(std::string num_str, int digits);
}

#endif