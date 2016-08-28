/*
 * C++ Primer
 * Chap. 3 Ex. 3.22
 * Hao Zhang
 * 2016.08.24
 * ex3.22.cpp
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <cctype>

int main()
{
    vector<string> text;
    string str;
    while (cin >> str) {
        text.push_back(str);
    }

    for (auto iter = text.begin(); 
         iter != text.end() && !iter->empty(); ++iter) {
        for (auto it_str = iter->begin(); it_str != iter->end();
                ++it_str) {
            *it_str = toupper(*it_str);
        }
    }

    for (auto iter = text.cbegin(); iter != text.cend(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}
