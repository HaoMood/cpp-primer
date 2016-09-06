/*
 * C++ Primer
 * Chap. 6 Ex. 6.38
 * Hao Zhang
 * 2016.09.03
 * arr_ptr.cpp
 */

#include "arr_ptr.h"

int_arr &arr_ptr(int i, int_arr &A, int_arr &B)
{
    return i % 2 == 0? A: B;
}
