/*
 * C++ Primer
 * Chap. 1. Ex. 1.10
 * Hao Zhang
 * 2016.08.17
 * ex1.10.cpp
 */

#include <iostream>

int main()
{
    int val = 10;

    while (val >= 0) {
        std::cout << val << std::endl;
        --val;
    }

    return 0;
}
