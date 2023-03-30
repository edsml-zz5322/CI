
/**
 * @file test_mymath.cpp
 * @brief Test file for mymath library.
 */

#include "mymath.hpp"
#include <cassert>

int main() {
    assert(add(2, 3) == 5);
    assert(subtract(5, 2) == 3);
    assert(multiply(2, 3) == 6);
    assert(divide(10, 2) == 5);

    return 0;
}
