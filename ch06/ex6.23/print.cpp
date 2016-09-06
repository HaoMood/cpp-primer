/*
 * C++ Primer
 * Chap. 6 Ex. 6.23
 * Hao Zhang
 * 2016.09.01
 * print.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

#include <stdexcept>
#include <cstddef>

#include "print.h"

void print(const int *A, const size_t n)
{
    if(n < 0) {
        throw std::runtime_error("Array length must >= 0");
    }

    for (size_t i = 0; i != n; ++i)
    {
        cout << A[i] << " ";
    }
    cout << endl;
}

void print(const int *begin, const int *end)
{
    if (end < begin) {
        throw std::runtime_error("Array length must >= 0");
    }
    
    for (const int *it = begin; it != end; ++it) {
        cout << *it << " ";
    }
    cout << endl;
}
