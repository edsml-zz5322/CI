#include <cassert>
#include "main.h"

int main() {
    // Test add function
    assert(add(2, 3) == 5);
    assert(add(-2, 3) == 1);
    assert(add(0, 0) == 0);

    // Test subtract function
    assert(subtract(5, 3) == 2);
    assert(subtract(5, 5) == 0);
    assert(subtract(0, 0) == 0);

    return 0;
}

