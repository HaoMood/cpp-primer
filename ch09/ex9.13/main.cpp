/*
 * C++ Primer
 * Chap. 9 Ex. 9.13
 * Hao Zhang
 * 2016.09.14
 * main.cpp
 */

#include <vector>
using std::vector;

#include <list>
using std::list;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    list<int> lst{1, 2, 3, 4};
    vector<double> vec(lst.cbegin(), lst.cend());

    for (const auto &val: vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
