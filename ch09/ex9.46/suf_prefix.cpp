/*
 * C++ Primer
 * Chap. 9 Ex. 9.46
 * Hao Zhang
 * 2016.09.18
 * suf_prefix.cpp
 */

#ifndef NDEBUG
#include <iostream>
using std::cerr;
using std::endl;
#endif

#include "suf_prefix.h"

string suf_prefix(const string &name, const string &prefix, 
    const string &suffix)
{
    string ret(name);
    ret.insert(0, prefix + " ");
#ifndef NDEBUG
    cerr << "[DEBUG] " << ret << endl;
#endif
    ret.insert(ret.size(), " " + suffix);
    return ret;
}
