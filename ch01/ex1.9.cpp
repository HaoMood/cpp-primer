/*
 * C++ Primer
 * Chap. 1. Ex. 1.9
 * Hao Zhang
 * 2016.08.17
 * ex1.9.cpp
 */

#include <iostream>

int main()
{
    int sum = 0;
    int val = 50;

    while (val <= 100) {
        sum += val;
        ++val;
    }

    std::cout << "Sum from 50 to 100 is " << sum << std::endl;
}
