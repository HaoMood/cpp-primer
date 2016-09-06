/*
 * C++ Primer
 * Chap. 6 Ex. 6.9
 * Hao Zhang
 * 2016.08.31
 * ex6.9.cpp
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <cstddef>

#include "Chapter6.h"

int main()
{
    cout << "Input n: " << endl;
    size_t n = 0;
    cin >> n;
    cout << fac(n) << endl;
}
