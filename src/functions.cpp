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

        //Check removal of newline '\n' characters from input file string 'num_str'.
        /* std::cout << "Size before: " << num_str.size() << '\n';
        if (num_str.find('\n') != std::string::npos) {
            std::cout << "There are newlines before!" << '\n';
        } else {
            std::cout << "There are no newlines before!" << '\n';
        } */
        num_str.erase(std::remove(num_str.begin(), num_str.end(), '\n'), num_str.cend());
        /* std::cout << "Size after: " << num_str.size() << '\n';
        if (num_str.find('\n') != std::string::npos) {
            std::cout << "There are newlines after!" << '\n';
        } else {
            std::cout << "There are no newlines after!" << '\n';
        } */

        return num_str;
    }
}