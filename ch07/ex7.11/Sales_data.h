/*
 * C++ Primer
 * Chap. 7 Ex. 7.6
 * Hao Zhang
 * 2016.09.08
 * Sales_data.h
 */

#ifndef SALES_DATA_H_
#define SALES_DATA_H_

#include <ostream>
using std::ostream;

#include <istream>
using std::istream;

#include <cstddef>

#include <string>
using std::string;

struct Sales_data
{
    string _book_no;
    size_t _num_sold = 0;
    double _revenue = 0.0;


    Sales_data() = default;
    Sales_data(const string &book_no): _book_no(book_no) {}
    Sales_data(const string &book_no, size_t num_sold, double price):
        _book_no(book_no), _num_sold(num_sold), _revenue(price * num_sold) 
    {}
    Sales_data(istream &in);

    string isbn() const 
    {
        return _book_no;
    }

    Sales_data &combine(const Sales_data &);


    double avg_price() const;
};

Sales_data add(const Sales_data &, const Sales_data &);
ostream &print(ostream &, const Sales_data &);
istream &read(istream &, Sales_data &);

#endif 
