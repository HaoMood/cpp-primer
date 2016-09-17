/*
 * C++ Primer
 * Chap. 9 Ex. 9.4
 * Hao Zhang
 * 2016.09.14
 * find.cpp
 */

#include "find.h"

bool find(vector<int>::const_iterator begin,
    vector<int>::const_iterator end, int sought)
{
    for (auto iter = begin; iter != end; ++iter) {
        if (*iter == sought) {
            return true;
        }
    }
    return false;
}
