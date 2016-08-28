/*
 * C++ Primer
 * Chap. 3 Ex. 3.5.1
 * Hao Zhang
 * 2016.08.23
 * ex3.5.1.cpp
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    string tot;
    string curr;
    while (cin >> curr) {
        tot += curr;
    }
    cout << tot << endl;
    return 0;
}
