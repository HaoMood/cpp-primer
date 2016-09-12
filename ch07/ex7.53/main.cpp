/*
 * C++ Primer
 * Chap. 7 Ex. 7.53
 * Hao Zhang
 * 2016.09.12
 * main.cpp
 */

#include <iostream>
using std::cerr;
using std::endl;

#include "Debug.h"

int main()
{
    constexpr Debug debug(false, true, false);
    if (debug.any()) {
        cerr << "print appropriate error messages" << endl;
    }

    constexpr Debug debug2(false);
    if (debug2.any()) {
        cerr << "print an error message" << endl;
    }
    return 0;
}
