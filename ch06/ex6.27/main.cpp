/*
 * C++ Primer
 * Chap. 6 Ex. 6.27
 * Hao Zhang
 * 2016.09.02
 * sum.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

#include "sum.h"

int main()
{
    cout << sum({1, 2, 3}) << endl;
    cout << sum({}) << endl;
    return 0;
}
