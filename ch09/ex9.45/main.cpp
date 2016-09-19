/*
 * C++ Primer
 * Chap. 9 Ex. 9.45
 * Hao Zhang
 * 2016.09.18
 * main.cpp
 */

#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

#include "suf_prefix.h"

int main()
{
    cout << suf_prefix("Alex White", "Mr.", "III") << endl;
    return 0;
}
