#include "include/functions.h"
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <algorithm>

/*
The text file contains a 1000-digit number. The four adjacent digits in the 1000-digit number that have the greatest product are 9x9x8x9 = 5832.
Find the thirteen (13) adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?
*/

int main() {
    std::string num_str;
    std::fstream num_file;
    num_file.open("prob8.txt", std::ios::in);
    if (num_file.is_open()) {
        std::ostringstream str_stream;
        str_stream << num_file.rdbuf();
        num_str = str_stream.str();
    }

    //Check removal of newline '\n' characters from input file.
    std::cout << "Size before: " << num_str.size() << '\n';
    if (num_str.find('\n') != std::string::npos) {
        std::cout << "There are newlines before!" << '\n';
    } else {
        std::cout << "There are no newlines before!" << '\n';
    }
    num_str.erase(std::remove(num_str.begin(), num_str.end(), '\n'), num_str.cend());
    std::cout << "Size after: " << num_str.size() << '\n';
    if (num_str.find('\n') != std::string::npos) {
        std::cout << "There are newlines after!" << '\n';
    } else {
        std::cout << "There are no newlines after!" << '\n';
    }

    return 0;
}