/*
 * C++ Primer
 * Chap. 9 Ex. 9.19
 * Hao Zhang
 * 2016.09.17
 * main.cpp
 */

#include <list>
using std::list;

#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    list<string> deq;
    string val;
    while (cin >> val) {
        deq.push_back(val);
    }

    for (auto iter = deq.cbegin(); iter != deq.cend(); ++iter) {
        cout << *iter << " ";
    }
    cout << endl;
    return 0;
}
