/*
 * C++ Primer
 * Chap. 6 Ex. 6.42
 * Hao Zhang
 * 2016.09.06
 * make_plural.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "make_plural.h"

int main()
{
    cout << make_plural(1, "class") << endl;
    cout << make_plural(2, "class", "es") << endl;
    cout << make_plural(2, "book") << endl;
    return 0;
}
