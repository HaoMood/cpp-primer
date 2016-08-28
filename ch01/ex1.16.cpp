/*
 * C++ Primer
 * Chap 1. Ex. 1.16
 * Hao Zhang
 * 2016.08.17
 * ex1.16.cpp
 */

#include <iostream>

int main()  
{
    int sum = 0;
    int val = 0;

    std::cin >> val;
    while (std::cin) {
        sum += val;
        std::cin >> val;
    }

    std::cout << "Sum of numbers is: " << sum << std::endl;

    return 0;
}
