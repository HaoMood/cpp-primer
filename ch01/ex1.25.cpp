/*
 * C++ Primer
 * Chap. 1. Ex. 1.25
 * Hao Zhang
 * 2016.08.18
 * ex1.25.cpp
 */

#include <iostream>
#include "Sales_item.h"

using std::cout;
using std::cerr;
using std::cin;
using std::endl;

int main()
{
    Sales_item total;   // variable to hold data for the next transaction

    // read the first transaction and ensure that there are data to process
    if (!(cin >> total))    {
        // no input! warn the user
        cerr << "No data?!" << endl;
        return -1;
    }

    Sales_item trans;   // variable to hold the running sum

    // read and process the remaining transactions
    while (cin >> trans)    {
        // if we are still processing the same book
        if (total.isbn() == trans.isbn())   {
            total += trans; // update the running total
        }
        else    {
            // print results for the previous book
            cout << total << endl;
            total = trans;  // #total now refers to the next book
        }
    }

    cout << total << endl;  // print the last transaction
    return 0;
}
