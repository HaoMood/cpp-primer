/*
 * C++ Primer
 * Chap. 6 Ex. 6.23
 * Hao Zhang
 * 2016.09.01
 * main.cpp
 */

#include <iterator>

#include "print.h"

int main()
{
    int i = 0;
    int j[2] = {0, 1};
    print(&i, 1);
    print(j, 2);

    print(&i, &i + 1);
    print(std::begin(j), std::end(j));
    return 0;
}
