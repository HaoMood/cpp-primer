/*
 * C++ Primer
 * Chap. 9 Ex. 9.16
 * Hao Zhang
 * 2016.09.17
 * main.cpp
 */

#include <list>
using std::list;

#include <vector>
using std::vector;

#include <iostream>
using std::cout;
using std::endl;

#include "equal.h"

int main()
{
    list<int> lst{1, 2};
    vector<int> vec{1, 3};
    cout << equal(lst, vec) << endl;
    return 0;
}
