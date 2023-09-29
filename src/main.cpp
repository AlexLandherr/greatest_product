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
    std::string num_str = func::txt_file_to_str("prob8.txt");

    std::cout << num_str.substr(0, 13) << '\n';

    return 0;
}