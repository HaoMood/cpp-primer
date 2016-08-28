/*
 * C++ Primer
 * Chap. 2. Ex. 2.42.2
 * Hao Zhang
 * 2016.08.23
 * ex2.42.2.cpp
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
    if (!(cin >> data._book_no))    {
        cerr << "no input" << endl;
        return -1;
    }
    cin >> data._units_sold;
    double price = 0.0;
    cin >> price;
    data._revenue = price * data._units_sold;

    Sales_data curr;
    while (cin >> curr._book_no) {
        cin >> curr._units_sold;
        double price = 0.0;
        cin >> price;
        curr._revenue = price * curr._units_sold;

        if (data._book_no == curr._book_no) {
            data._units_sold += curr._units_sold;
            data._revenue += curr._revenue;
        }
        else {
            cout << data._book_no << " " << data._units_sold 
                 << " " << data._revenue << " ";
            if (data._units_sold != 0)  {
                cout << data._revenue / data._units_sold << endl;
            }
            else {
                cout << "(no sales)" << endl;
            }

            data._book_no = curr._book_no;
            data._units_sold = curr._units_sold;
            data._revenue = curr._revenue;
        }
    }
    cout << data._book_no << " " << data._units_sold 
         << " " << data._revenue << " ";
    if (data._units_sold != 0)  {
        cout << data._revenue / data._units_sold << endl;
    }
    else {
        cout << "(no sales)" << endl;
    }
    return 0;
}
