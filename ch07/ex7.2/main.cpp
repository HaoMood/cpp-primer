/*
 * C++ Primer
 * Chap. 7 Ex. 7.1
 * Hao Zhang
 * 2016.09.07
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
    if (!(cin >> total._book_no >> total._num_sold >> total._revenue)) {
        cerr << "[ERROR] No valid input." << endl;
        return -1;
    }

    Sales_data curr;
    while (cin >> curr._book_no >> curr._num_sold >> curr._revenue) {
        if (curr._book_no == total._book_no) {
            total.combine(curr);
        }
        else {
            cout << total._book_no << " " << total._num_sold << " "
                 << total._revenue << " " 
                 << total.avg_price() << endl;
            total = curr;
        }
    }
    cout << total._book_no << " " << total._num_sold << " "
         << total._revenue << " " 
         << total.avg_price() << endl;
    return 0;   
}
