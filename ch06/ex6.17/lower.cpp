/*
 * C++ Primer
 * Chap. 6 Ex. 6.17
 * Hao Zhang
 * 2016.09.01
 * lower.cpp
 */

#include <string>
using std::string;

#include <cctype>

#include "str.h"

void lower(string &s)
{
    for (auto &c: s) {
        c = tolower(c);
    }
}
