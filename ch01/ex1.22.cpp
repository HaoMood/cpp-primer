/*
 * C++ Primer
 * Chap. 1. Ex. 1.22
 * Hao Zhang
 * 2016.08.17
 * ex.1.22.cpp
 */

#include <iostream>
#include "Sales_item.h"

int main()
{
    Sales_item item;
    Sales_item sum;

    if (std::cin >> item) {
        sum = item;
    }

    while (std::cin >> item) {
        sum += item;
    }

    std::cout << sum << std::endl;

    return 0;
}
