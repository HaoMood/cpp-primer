/*
 * C++ Primer
 * Chap. 6 Ex. 6.4
 * Hao Zhang
 * 2016.08.29
 * ex6.4.cpp
 */

#include <iostream>
using std::cout;
using std::cerr;
using std::endl;
using std::cin;

#include <stdexcept>

int fac(int n) 
{
    if (n < 0) {
        throw std::runtime_error("n cannot be negative");
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * fac(n - 1);
    }
}

int main()
{
    cout << "input #n" << endl;
    int n = 0;
    cin >> n;
    try {
        cout << fac(n) << endl;
    }
    catch (std::runtime_error err) {
        cerr << err.what() << endl;
    }
    return 0;
}
