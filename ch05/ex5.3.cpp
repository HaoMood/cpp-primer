/*
 * C++ Primer
 * Chap. 5 Ex. 5.3
 * Hao Zhang
 * 2016.08.28
 * ex5.3.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int sum;
    int i = 50;
    while (i != 101) {
        sum += i, ++i;
    }
    cout << "Sum of [50, 100] is " << sum << endl;
    return 0;
}
