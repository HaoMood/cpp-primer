#ifndef SALES_DATA_H
#define SALES_DATA_H

#include <string>

struct Sales_data
{
    std::string _book_no;
    unsigned _units_sold = 0;
    double _revenue = 0.0;
};

#endif 
