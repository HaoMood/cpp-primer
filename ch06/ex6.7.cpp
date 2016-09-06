/*
 * C++ Primer
 * Chap. 6 Ex. 6.7
 * Hao Zhang
 * 2016.08.29
 * ex6.7.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

#include <cstddef>

size_t count()
{
    static size_t num = 0;
    return num++;
}

int main()
{
    for (int i = 0; i != 10; ++i) {
        cout << count() << endl;
    }
    return 0;
}
