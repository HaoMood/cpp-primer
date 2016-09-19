/*
 * C++ Primer
 * Chap. 9 Ex. 9.51
 * Hao Zhang
 * 2016.09.19
 * Date.h
 */

#ifndef DATE_H_
#define DATE_H_

#include <cstddef>

#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

class Date 
{
private:
    size_t _year = 0;
    size_t _month = 0;
    size_t _day = 0;

public:
    Date() = default;
    Date(const string &str);

    void show();

private:
    bool _check_valid();
};

inline void Date::show()
{
    cout << _year << "." << _month << "." << _day << endl;
}

inline bool Date::_check_valid()
{
    return _month > 0 && _month <= 12 && _day > 0 &&  _day <= 31;
}

#endif
