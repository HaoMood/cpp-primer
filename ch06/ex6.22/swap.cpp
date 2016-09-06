/*
 * C++ Primer
 * Chap. 6 Ex. 6.22
 * Hao Zhang
 * 2016.09.01
 * swap.cpp
 */

#include "swap.h"

void swap(const int *&p1, const int *&p2)
{
    const int *ptemp = p1;
    p1 = p2;
    p2 = ptemp;
}
