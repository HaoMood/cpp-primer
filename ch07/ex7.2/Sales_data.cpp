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
