/*
 * C++ Primer
 * Chap. 1. Ex. 1.13.1
 * Hao Zhang
 * 2016.08.17
 * ex1.13.1.cpp
 */

#include <iostream>

int main()
{
    int sum = 0;

    for (int val = 50; val <= 100; ++ val) {
        sum += val;
    }

    std::cout << "Sum from 50 to 100 is " << sum << std::endl;
}
