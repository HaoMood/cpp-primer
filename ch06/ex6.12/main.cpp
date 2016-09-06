/*
 * C++ Primer
 * Chap. 6 Ex. 6.12
 * Hao Zhang
 * 2016.09.01
 * main.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

#include "swap.h"

int main()
{
    int a = 5;
    int b = 3;
    swap(a, b);
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}
