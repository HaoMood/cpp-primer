/*
 * C++ Primer
 * Chap. 9 Ex. 9.4
 * Hao Zhang
 * 2016.09.14
 * main.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include "find.h"

int main()
{
    vector<int> vec{1, 2, 3, 4, 5};
    int sought = 8;

    cout << find(vec.cbegin(), vec.cend(), sought) << endl;
    return 0;
}
