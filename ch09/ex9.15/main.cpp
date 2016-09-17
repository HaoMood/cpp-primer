/*
 * C++ Primer
 * Chap. 9 Ex. 9.16
 * Hao Zhang
 * 2016.09.16
 * main.cpp
 */

#include <vector>
using std::vector;

#include <iostream>
using std::cout;
using std::endl;

#include "equal.h"

int main()
{
    vector<int> vec1{1};
    vector<int> vec2{1, 2};
    cout << equal(vec1, vec2) << endl;
    return 0;
}
