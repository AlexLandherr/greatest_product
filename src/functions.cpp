#include "include/functions.h"
#include <string>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <cstdint>

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

        //Removing linefeed and carriage return characters from 'num_str'.
        num_str.erase(std::remove(num_str.begin(), num_str.end(), '\n'), num_str.cend());
        num_str.erase(std::remove(num_str.begin(), num_str.end(), '\r'), num_str.cend());

        return num_str;
    }

    int64_t find_greatest_product(std::string num_str, int digits) {
        int64_t greatest_product = 0;

        for (int i = 0; i < static_cast<int>(num_str.size()) - digits; i++) {
            int64_t temp_product = 1;
            std::string sub = num_str.substr(i, digits);
            
            for (int j = 0; j < static_cast<int>(sub.size()); j++) {
                temp_product = temp_product * std::stoi(sub.substr(j, 1));
            }

            if (temp_product > greatest_product) {
                greatest_product = temp_product;
            }
        }

        return greatest_product;
    }
}