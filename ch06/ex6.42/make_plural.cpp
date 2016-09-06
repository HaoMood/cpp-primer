/*
 * C++ Primer
 * Chap. 6 Ex. 6.42
 * Hao Zhang
 * 2016.09.06
 * make_plural.cpp
 */

#include <string>
using std::string;

#include <cstddef>

#include "make_plural.h"

string make_plural(size_t ctr, const string &word, 
         const string &ending)
{
    return (ctr > 1)? word + ending: word;
}
