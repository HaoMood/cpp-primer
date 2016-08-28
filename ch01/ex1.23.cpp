/*
 * C++ Primer
 * Chap. 1. Ex. 1.23
 * Hao Zhang
 * 2016.08.18
 * ex1.23.cpp
 */

#include <iostream>
#include "Sales_item.h"

using std::cin;
using std::cout;
using std::endl;

int main()
{
    Sales_item prev_item, curr_item;

    if (!(cin >> prev_item))   {
        return -1;
    }
    int count = 1;

    while (cin >> curr_item)    {
        if (curr_item.isbn() == prev_item.isbn())   {
            ++count;
        }       
        else    {
            cout << prev_item.isbn() << ": " << count << " times." << endl;
            prev_item = curr_item;
            count = 1;
        }
    }
    cout << prev_item.isbn() << ": " << count << " times." << endl;
    return 0;
}
