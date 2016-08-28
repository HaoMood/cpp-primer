/*
 * C++ Primer
 * Chap. 1. Ex. 1.19
 * Hao Zhang
 * 2016.08.17
 * ex1.19.cpp
 */

#include <iostream>

int main()
{
    int low = 0;
    int high = 0;
    std::cin >> low >> high;

    if (low > high) {
        int tmp = low;
        low = high;
        high = tmp;
    }

    for (int i = low; i <= high; ++i) {
        std::cout << i << std::endl;
    }

    return 0;
}
