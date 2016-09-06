/*
 * C++ Primer
 * Chap. 6 Ex. 6.21
 * Hao Zhang
 * 2016.09.01
 * max.cpp
 */

#include "max.h"

int max(const int a, const int * const p)
{
    if (a > *p) {
        return a;
    }
    else {
        return *p;
    }
}
