/*
 * C++ Primer
 * Chap. 9 Ex. 9.41
 * Hao Zhang
 * 2016.09.18
 * main.cpp
 */

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    vector<char> vec = {'a', 'b', 'c', 'd'};
    string str(vec.cbegin(), vec.cend());
    cout << str << endl;
    return 0;
}
