/*
 * C++ Primer
 * Chap. 9 Ex. 9.24
 * Hao Zhang
 * 2016.09.17
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
//    cout << vec.at(0) << endl;
//    cout << vec[0] << endl;
//    cout << vec.front() << endl;
    cout << *vec.begin() << endl;
    return 0;
}
