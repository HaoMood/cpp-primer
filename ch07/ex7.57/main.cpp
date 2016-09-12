/*
 * C++ Primer
 * Chap. 7 Ex. 7.57
 * Hao Zhang
 * 2016.09.12
 * main.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

#include "Account.h"

int main()
{
    double r;
    r = Account::get_rate();
    cout << r << endl;
    return 0;
}
