/*
 * C++ Primer
 * Chap. 5 Ex. 5.24
 * Hao Zhang
 * 2016.08.29
 * ex5.24.cpp
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <stdexcept>

int main()
{
    int a = 0, b = 0;
    cout << "Input #a and #b" << endl;
    cin >> a >> b;

    if (b == 0) {
        throw std::runtime_error("Divided by zero");
    }
    int ret = a / b;

    cout << ret << endl;
    return 0;
}
