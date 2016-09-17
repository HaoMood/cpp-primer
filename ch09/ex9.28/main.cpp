/*
 * C++ Primer
 * Chap. 9 Ex. 9.28
 * Hao Zhang
 * 2016.09.17
 * main.cpp
 */

#include <forward_list>
using std::forward_list;

#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

#include "find_insert.h"

int main()
{
    forward_list<string> flst;
//    forward_list<string> flst{"a", "b", "c"};
    find_insert(flst, "a", "d");
    find_insert(flst, "f", "e");

    for (const auto &val: flst) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
