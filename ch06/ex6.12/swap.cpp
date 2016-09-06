/*
 * C++ Primer
 * Chap. 6 Ex. 6.12
 * Hao Zhang
 * 2016.09.01
 * swap.cpp
 */

#include "swap.h"

void swap(int &a, int &b)
{
    auto temp = a;
    a = b;
    b = temp;
}
