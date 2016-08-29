/*
 * C++ Primer
 * Chap. 5 Ex. 5.23
 * Hao Zhang
 * 2016.08.29
 * ex5.23.cpp
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    int a = 0, b = 0;
    cout << "Input #a and #b" << endl;
    cin >> a >> b;
    int ret = a / b;
    cout << ret << endl;
    return 0;
}
