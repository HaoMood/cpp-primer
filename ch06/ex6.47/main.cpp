/*
 * C++ Primer
 * Chap. 6 Ex. 6.47
 * Hao Zhang
 * 2016.09.06
 * main.cpp
 */

#include <vector>
using std::vector;

#include "print.h"

int main()
{
    vector<int> vec{1, 2, 3, 4, 5};
    print(vec.cbegin(), vec.cend());
    return 0;
}
