/*
 * C++ Primer
 * Chap. 6 Ex. 6.26
 * Hao Zhang
 * 2016.09.02
 * main.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char *argv[])
{
    for (int i = 1; i != argc; ++i) {
        cout << argv[i] << endl;
    }
    return 0;
}
