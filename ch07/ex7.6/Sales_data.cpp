/*
 * C++ Primer
 * Chap. 7 Ex. 7.2
 * Hao Zhang
 * 2016.09.07
 * Sales_data.cpp
 */

#include "Sales_data.h"

Sales_data &Sales_data::combine(const Sales_data &rhs)
{
    _num_sold += rhs._num_sold;
    _revenue += rhs._revenue;
    return *this;
}

double Sales_data::avg_price() const
{
    if(_num_sold > 0) {
        return _revenue / _num_sold;
    }
    else {
        return 0;
    }
}

istream &read(istream &in, Sales_data &item)
{
    double price = 0.0;
    in >> item._book_no >> item._num_sold >> price;
    item._revenue = price * item._num_sold;

    return in;
}

ostream &print(ostream &out, const Sales_data &item)
{
    out << item._book_no << " " << item._num_sold << " " << item._revenue
        << " " << item.avg_price();

    return out;
}

Sales_data add(const Sales_data &item1, const Sales_data &item2) 
{
    Sales_data sum = item1;
    sum.combine(item2);
    return sum;
}
