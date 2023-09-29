#include "include/functions.h"
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <iostream>

namespace func {
    std::string txt_file_to_str(std::string file_path) {
        std::fstream num_file;
        std::ostringstream str_stream;
        std::string num_str;

        num_file.open(file_path, std::ios::in);
        if (num_file.is_open()) {
            str_stream << num_file.rdbuf();
            num_file.close();
        }
        num_str = str_stream.str();

        //Removing '\n' characters from 'num_str'.
        num_str.erase(std::remove(num_str.begin(), num_str.end(), '\n'), num_str.cend());

        return num_str;
    }
}