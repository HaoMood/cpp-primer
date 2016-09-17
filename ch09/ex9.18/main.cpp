/*
 * C++ Primer
 * Chap. 9 Ex. 9.18
 * Hao Zhang
 * 2016.09.17
 * main.cpp
 */

#include <deque>
using std::deque;

#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

int main()
{
    deque<string> deq;
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
