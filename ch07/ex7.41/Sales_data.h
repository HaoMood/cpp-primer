/*
 * C++ Primer
 * Chap. 7 Ex. 7.41
 * Hao Zhang
 * 2016.09.11
 * Sales_data.h
 */

#ifndef SALES_DATA_H_ 
#define SALES_DATA_H_

#include <string>
using std::string;

#include <cstddef>

#include <istream>
using std::istream;

#ifndef NDEBUG
#include <iostream>
using std::cout;
using std::endl;
#endif

class Sales_data
{
private:
    string _isbn;
    size_t _num_sold = 0;
    double _revenue = 0.0;

public:
    Sales_data(string isbn, size_t num_sold, double revenue);
    Sales_data();
    Sales_data(string isbn);
    Sales_data(istream &in);
};

Sales_data::Sales_data(string isbn, size_t num_sold, double revenue):
    _isbn(isbn), _num_sold(num_sold), _revenue(revenue) 
{
#ifndef NDEBUG
    cout << "Sales_data(string isbn, size_t num_sold, double revenue);" 
         << endl;
#endif
}

Sales_data::Sales_data(): Sales_data("", 0, 0.0) 
{
#ifndef NDEBUG
    cout << "Sales_data();" << endl;
#endif
}

Sales_data::Sales_data(string isbn): Sales_data(isbn, 0, 0.0) 
{
#ifndef NDEBUG
    cout << "Sales_data(string isbn);" << endl;
#endif
}

Sales_data::Sales_data(istream &in): Sales_data("", 0, 0.0) 
{
    in >> _isbn >> _num_sold >> _revenue;
#ifndef NDEBUG
    cout << "Sales_data(istream &in);" << endl;
#endif
}
#endif
