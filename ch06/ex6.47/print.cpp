/*
 * C++ Primer
 * Chap. 6 Ex. 6.47
 * Hao Zhang
 * 2016.09.06
 * print.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

#ifndef NDEBUG
using std::cerr;
#endif

#include <vector>
using std::vector;

#include "print.h"

void print(vector<int>::const_iterator begin, 
        vector<int>::const_iterator end)
{
    if (begin == end) {
        cout << endl;
    }
    else {
#ifndef NDEBUG
        cerr << "[DEBUG] current size: " << end - begin << endl;
#endif

        cout << *begin << " ";

#ifndef NDEBUG
        cout << endl;
#endif 

        print(begin + 1, end);
    }
}
