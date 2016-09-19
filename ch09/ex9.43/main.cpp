/*
 * C++ Primer
 * Chap. 9 Ex. 9.43
 * Hao Zhang
 * 2016.09.18
 * main.cpp
 */

#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

#include "replace.h"

int main()
{
//    string s = "thoasdtho";
    string s = "abc";
    replace(s, "tho", "though");
    cout << s << endl;
    return 0;
}
