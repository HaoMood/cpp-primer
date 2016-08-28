/*
 * C++ Primer
 * Chap. 2. Ex. 2.41.1
 * Hao Zhang
 * 2016.08.23
 * ex2.41.1.cpp
 */

#include <iostream>
using std::cout;
using std::cin;
using std::cerr;
using std::endl;

#include <string>

struct Sales_data 
{
    std::string _book_no;
    unsigned _units_sold = 0;
    double _revenue = 0.0;
};

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
