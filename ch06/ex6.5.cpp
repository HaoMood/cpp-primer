/*
 * C++ Primer
 * Chap. 6 Ex. 6.5
 * Hao Zhang
 * 2016.08.29
 * ex6.5.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

double abs(double x)
{
    return x >= 0? x: -x;
}

int main()
{
    cout << abs(-5.0) << " " << abs(5.0) << endl;
    return 0;
}
