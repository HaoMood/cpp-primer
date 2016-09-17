/*
 * C++ Primer
 * Hao Zhang
 * 2016.09.17
 * main.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

#include <list>
using std::list;

#include <deque>
using std::deque;

int main()
{
    list<int> lst{1, 2, 3, 4, 5, 6};
    deque<int> deq_odd, deq_even;
    for (const auto val: lst) {
        if (val % 2 == 0) {
            deq_even.push_back(val);
        }
        else {
            deq_odd.push_back(val);
        }
    }

    for (const auto val: deq_odd) {
        cout << val << " ";
    }
    cout << endl;

    for (const auto val: deq_even) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
