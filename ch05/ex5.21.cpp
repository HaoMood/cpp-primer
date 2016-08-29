/*
 * C++ Primer
 * Chap. 5 Ex. 5.21
 * Hao Zhang
 * 2016.08.29
 * ex5.21.cpp
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    string prev_str;
    if (!(cin >> prev_str)) {
        cout << "No valid input" << endl;
        return -1;
    }

    string str;
    while (cin >> str) {
        if (str == prev_str && str[0] == '_') { 
            cout << str << " occurs twice in succession" << endl;
            return -1;
        }
        else {
            prev_str = str;
        }
    }
    cout << "no word was repeated" << endl;
    return 0;
}
