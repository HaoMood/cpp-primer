/*
 * C++ Primer
 * Chap. 6 Ex. 6.17
 * Hao Zhang
 * 2016.09.01
 * contain_capital.cpp
 */

#include <string>
using std::string;

#include <cctype>

#include "str.h"

bool contain_capital(const string &s)
{
    for (auto c: s) {
        if (isupper(c)) {
            return true;
        }
    }
    return false;
}
