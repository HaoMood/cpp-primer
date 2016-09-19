/*
 * C++ Primer
 * Chap. 9 Ex. 9.38
 * Hao Zhang
 * 2016.09.18
 * main.cpp
 */

#include <vector>
using std::vector;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    vector<int> vec;
    cout << vec.size() << " " << vec.capacity() << endl;

    for (vector<int>::size_type i = 0; i != 24; ++i) {
        vec.push_back(i);
        cout << vec.size() << " " << vec.capacity() << endl;
    }
    return 0;
}
