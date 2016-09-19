/*
 * C++ Primer
 * Chap. 9 Ex. 9.49
 * Hao Zhang
 * 2016.09.19
 * find.cpp
 */

#include <fstream>
using std::ifstream;

#include <stdexcept>
using std::runtime_error;

#include "find.h"

string find(const string &file_name)
{
    ifstream fin(file_name);
    if (!fin) {
        throw runtime_error("Cannot open file " + file_name);
    }

    const string ascender = "tidfhjklb";
    const string descender = "qypgj";

    string word;
    string longest;
    while (fin >> word) {
        if (word.find_first_of(ascender) == string::npos 
            && word.find_first_of(descender) == string::npos
            && word.size() > longest.size()) {
            longest = word;
        }
    }

    return longest;
}
