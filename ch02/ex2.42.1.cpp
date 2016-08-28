/*
 * C++ Primer
 * Chap. 2. Ex. 2.42.1
 * Hao Zhang
 * 2016.08.23
 * ex2.42.1.cpp
 */

#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

#include <string>
#include "Sales_data.h"

int main()
{
    Sales_data data;
    while (cin >> data._book_no) {
        cin >> data._units_sold;
        double price = 0.0;
        cin >> price;
        data._revenue = price * data._units_sold;

        cout << data._book_no << " " << data._units_sold << " "
             << data._revenue << " " << price << endl;
    }
    return 0;
}
