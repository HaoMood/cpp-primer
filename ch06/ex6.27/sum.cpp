/*
 * C++ Primer
 * Chap. 6 Ex. 6.27
 * Hao Zhang
 * 2016.09.02
 * sum.cpp
 */ 

#include <initializer_list>
using std::initializer_list;

#include "sum.h"

int sum(initializer_list<int> lst)
{
    int ret = 0;
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        ret += *it;
    }
    return ret;
}
