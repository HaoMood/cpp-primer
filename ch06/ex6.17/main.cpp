/*
 * C++ Primer
 * Chap. 6 Ex. 6.17
 * Hao Zhang
 * 2016.09.01
 * main.cpp
 */

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <string>
using std::string;

#include "str.h"

int main()
{
    string s;
    cout << "input a string" << endl;
    cin >> s;
    if (contain_capital(s)) {
        cout << s << " contains capital" << endl;
    }
    lower(s);
    cout << s << endl;
    return 0;
}
