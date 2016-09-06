/*
 * C++ Primer
 * Chap. 6 Ex. 6.33
 * Hao Zhang
 * 2016.09.03
 * print.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include "print.h"

void print(const vector<int>::const_iterator begin, 
           const vector<int>::const_iterator end)
{
    if (begin == end) {
        cout << endl;
        return;
    }
    cout << *begin << " ";
    print(begin + 1, end);
}
