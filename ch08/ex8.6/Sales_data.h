/*
 * C++ Primer
 * Chap. 8 Ex. 8.6
 * Hao Zhang
 * 2016.09.13
 * Sales_data.h
 */

#ifndef SALES_DATA_H_
#define SALES_DATA_H_

#include <string>
using std::string;

#include <cstddef>

#include <istream>
using std::istream;

#include <ostream>
using std::ostream;

class Sales_data
{
private:
    string _isbn;
    size_t _num_sold = 0;
    double _revenue = 0.0;

public:
    Sales_data() = default;
    
    string get_isbn() const;
    void combine(const Sales_data &sales_data);
    
    friend istream &read(istream &in, Sales_data &sales_data);
    friend ostream &print(ostream &out, const Sales_data &sales_data);
};

inline string Sales_data::get_isbn() const
{
    return _isbn;
}

inline void Sales_data::combine(const Sales_data &sales_data)
{
    _num_sold += sales_data._num_sold;
    _revenue += sales_data._revenue;
}

inline istream &read(istream &in, Sales_data &sales_data)
{
    in >> sales_data._isbn >> sales_data._num_sold >> sales_data._revenue;
    return in;
}

inline ostream &print(ostream &out, const Sales_data &sales_data)
{
    out << sales_data._isbn << " " << sales_data._num_sold << " "
        << sales_data._revenue;
    return out;
}

#endif 
