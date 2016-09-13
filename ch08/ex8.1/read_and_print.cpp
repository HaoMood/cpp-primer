/*
 * C++ Primer
 * Chap. 8 Ex. 8.1
 * Hao Zhang
 * 2016.09.13
 * read_and_print.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "read_and_print.h"

istream &read_and_print(istream &in)
{
    string val;
    while (in >> val) {
        cout << val << endl;
    }
    in.clear();
    return in;
}
