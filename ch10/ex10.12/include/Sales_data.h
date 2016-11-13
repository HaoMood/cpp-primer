/*
 * Sales_data.h
 * C++ Primer Chap. 7 Ex. 10.12
 * Hao Zhang
 * 2016.09.08  First release
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

class Sales_data
{
private:
    string _book_no = "";
    size_t _num_sold = 0;
    double _revenue = 0.0;

public:
    Sales_data() = default;
    Sales_data(const string &book_no): _book_no(book_no) 
    {}
    Sales_data(const string &book_no, size_t num_sold, double price):
        _book_no(book_no), _num_sold(num_sold), _revenue(price * num_sold) 
    {}
    Sales_data(istream &in) {
        read(in, *this);
    }

    string isbn() const {
        return _book_no;
    }
    Sales_data &combine(const Sales_data &sales_data);
    friend Sales_data add(const Sales_data &item1, 
                          const Sales_data &item2);
    friend ostream &print(ostream &out, const Sales_data &item);
    friend istream &read(istream &in, Sales_data &item);

protected:
    double avg_price() const {
        return _num_sold > 0 ? _revenue / _num_sold : 0;
    }
};

Sales_data add(const Sales_data &, const Sales_data &);
ostream &print(ostream &, const Sales_data &);
istream &read(istream &, Sales_data &);

#endif 
