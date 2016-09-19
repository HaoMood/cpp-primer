/*
 * C++ Primer
 * Chap. 9 Ex. 9.51
 * Hao Zhang
 * 2016.09.19
 * Date.cpp
 */

#include <stdexcept>
using std::runtime_error;

#include <vector>
using std::vector;

#include "Date.h"

Date::Date(const string &str) 
{
    if (str.find("/") != string::npos) { // Case: 1/1/1900
        string::size_type pos1 = str.find("/");
        string::size_type pos2 = str.find("/", pos1 + 1);

        if (pos2 == string::npos) {
            throw runtime_error("[ERROR] Wrong format: " + str);
        }
    
        _month = stoi(str.substr(0, pos1));
        _day = stoi(str.substr(pos1 + 1, pos2));
        _year = stoi(str.substr(pos2 + 1));
    }
    else if (str.find(",") != string::npos)  { 
        // Case: January 1, 1900 or Jan 1, 1900
        string::size_type pos1 = str.find_first_of("1234567890");
        string::size_type pos2 = str.find(",");

        if (pos1 == string::npos) {
            throw runtime_error("[ERROR] Wrong format: " + str);
        }

        string month = str.substr(0, pos1 - 1);
        _day = stoi(str.substr(pos1, pos2));
        _year = stoi(str.substr(pos2 + 1));

        const vector<string> month_name = { 
            // The first elememt is 0 so the index of each name 
            // corresponds to the month.
            "", "January", "February", "March", "April", "May",
            "June", "July", "August", "September", "October",
            "November", "December"
        };
        const vector<string> month_name_abbr = { 
            "", "Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug",
            "Sep", "Oct", "Nov", "Dec"
        };
    
        for (vector<string>::size_type i = 0; 
             i != month_name.size(); ++i) {
            if (month == month_name[i] || month == month_name_abbr[i]) {
                _month = i;
            }
        }
    }
    else {
        throw runtime_error("[ERROR] Wrong format: " + str);
    }


    if (!_check_valid()) {
        throw runtime_error("[ERROR] Wrong format: " + str);
    }
}
