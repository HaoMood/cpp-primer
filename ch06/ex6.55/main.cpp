/*
 * C++ Primer
 * Chap. 6 Ex. 6.55
 * Hao Zhang
 * 2016.09.06
 * main.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include "arth.h"

int main()
{
    vector<int (*)(const int, const int)> vec{add, sub, mul, divide};
    
    for (auto f: vec) {
        cout << f(2, 1) << endl;
    }


    return 0;
}
