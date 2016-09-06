/*
 * C++ Primer
 * Chap. 6 Ex. 6.22
 * Hao Zhang
 * 2016.09.01
 * main.cpp
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include "swap.h"

int main()
{
    int a = 0, b = 0;
    cout << "input two ints" << endl;
    cin >> a >> b;
    const int *p1 = &a, *p2 = &b;
    swap(p1, p2);
    cout << *p1 << " " << *p2 << endl;
    return 0;
}
