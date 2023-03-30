/**
 * @file main.cpp
 * @brief A simple program to test mymath library.
 */

#include "mymath.hpp"
#include <iostream>

int main() {
    std::cout << "1 + 2 = " << add(1, 2) << std::endl;
    std::cout << "3 - 4 = " << subtract(3, 4) << std::endl;
    std::cout << "5 * 6 = " << multiply(5, 6) << std::endl;
    std::cout << "8 / 2 = " << divide(8, 2) << std::endl;
    return 0;
}

