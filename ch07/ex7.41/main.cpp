/*
 * C++ Primer
 * Chap. 7 Ex. 7.41
 * Hao Zhang
 * 2016.09.11
 * main.cpp
 */

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include "Sales_data.h"

int main()
{
    cout << "=========================" << endl;
    Sales_data data1("abc", 1, 10);

    cout << "=========================" << endl;
    Sales_data data2;

    cout << "=========================" << endl;
    Sales_data data3("abc");

    cout << "=========================" << endl;
    Sales_data data4(cin);

    return 0;
}
