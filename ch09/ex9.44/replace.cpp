/*
 * C++ Primer
 * Chap. 9 Ex. 9.44
 * Hao Zhang
 * 2016.09.18
 * replace.cpp
 */

#ifndef NDEBUG
#include <iostream>
using std::cerr;
using std::endl;
#endif

#include "replace.h"

void replace(string &s, const string &old_val, const string &new_val)
{
    string::size_type old_val_size = old_val.size();
    for (string::size_type i = 0; i != s.size(); ++i) {
        if (string(s, i, old_val_size) == old_val) {
            s.replace(i, old_val_size, new_val);
        }
    }
}
