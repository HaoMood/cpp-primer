/*
 * C++ Primer
 * Chap. 9 Ex. 9.16
 * Hao Zhang
 * 2016.09.16
 * equal.cpp
 */

#include "equal.h"

bool equal(const list<int> &lst, const vector<int> &vec)
{
    if (lst.size() != vec.size()) {
        return false;
    }

    auto iter1 = lst.cbegin();
    auto iter2 = vec.cbegin();
    for (; iter1 != lst.cend() && iter2 != vec.cend(); ++iter1, ++iter2) 
    {
        if (*iter1 != *iter2) {
            return false;
        }
    }
    return true;
}
