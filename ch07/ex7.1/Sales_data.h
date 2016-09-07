/*
 * C++ Primer
 * Chap. 7 Ex. 7.1
 * Hao Zhang
 * 2016.09.07
 * Sales_data.h
 */

#ifndef SALES_DATA_H_
#define SALES_DATA_H_

struct Sales_data
{
    string _book_no;
    size_t _num_sold = 0;
    double _revenue = 0.0;
};

#endif 
