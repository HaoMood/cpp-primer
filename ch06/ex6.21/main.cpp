/*
 * C++ Primer
 * Chap. 6 Ex. 6.21
 * Hao Zhang
 * 2016.09.01
 * main.cpp
 */

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "max.h"

int main()
{
    int a = 0;
    int b = 0;
    cout << "please input two ints" << endl;
    cin >> a >> b;
    cout << "max: " << max(a, &b) << endl;
    return 0;
}
