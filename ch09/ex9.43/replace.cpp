/*
 * C++ Primer
 * Chap. 9 Ex. 9.43
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
    for (auto iter = s.begin(); iter + old_val_size - 1 != s.end(); 
         ++iter) {
#ifndef NDEBUG
        cerr << "[DEBUG] " << string(iter, iter + old_val_size) << endl;
#endif
        if (string(iter, iter + old_val_size) == old_val) {
            s.replace(iter, iter + old_val_size, new_val);
        }
    }
}
