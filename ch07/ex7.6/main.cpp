/*
 * C++ Primer
 * Chap. 7 Ex. 7.6
 * Hao Zhang
 * 2016.09.08
 * main.cpp
 */

#include <iostream>
using std::cout;
using std::endl;
using std::cin;
using std::cerr;

#include "Sales_data.h"

int main()
{
    Sales_data total;
    if (!read(cin, total)) {
        cerr << "[ERROR] No valid input." << endl;
        return -1;
    }

    Sales_data curr;
    while (read(cin, curr)) {
        if (curr._book_no == total._book_no) {
            total.combine(curr);
        }
        else {
            print(cout, total);
            cout << endl;
            total = curr;
        }
    }
    print(cout, total);
    cout << endl;
    return 0;   
}
