/*
 * C++ Primer
 * Chap. 1. Ex. 1.11
 * Hao Zhang
 * 2016.08.17
 * ex1.11.cpp
 */

#include <iostream>

int main()
{
    std::cout << "Please input 2 numbers:" << std::endl;
    int low = 0, high = 0;
    std::cin >> low >> high;

    for (int val = low; val <= high; ++val) {
        std::cout << val << std::endl;
    }

    return 0;
}
