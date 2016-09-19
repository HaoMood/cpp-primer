/*
 * C++ Primer
 * Chap. 9 Ex. 9.47
 * Hao Zhang
 * 2016.09.18
 * main.cpp
 */

#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    string str = "ab2c3d7R4E6";

    for (string::size_type pos = 0; 
         (pos = str.find_first_of("0123456789", pos)) != string::npos;
         ++pos) {
        cout << "pos = " << pos << " str[pos] = " << str[pos] << endl;
    }

    for (string::size_type pos = 0; 
         (pos = str.find_first_not_of("0123456789", pos)) != string::npos;
         ++pos) {
        cout << "pos = " << pos << " str[pos] = " << str[pos] << endl;
    }
    return 0;
}
