/*
 * Sales_data.cpp
 * C++ Primer Chap. 7 Ex. 10.13
 * Hao Zhang
 * 2016.11.13  First release
 */

#include "Sales_data.h"

Sales_data &Sales_data::combine(const Sales_data &sales_data)
{
    _num_sold += sales_data._num_sold;
    _revenue += sales_data._revenue;
    return *this;
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
