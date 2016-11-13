/*
 * C++ Primer
 * Chap. 10 Ex. 10.7
 * Hao Zhang
 * 2016.09.20
 * main.cpp
 */

#include <vector>
using std::vector;

#include <algorithm>

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    vector<int> vec;
    vec.reserve(10);
    std::fill_n(vec.begin(), 10, 0);

    for (auto val: vec) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
