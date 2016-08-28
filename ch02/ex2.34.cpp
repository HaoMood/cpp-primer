/*
 * C++ Primer
 * Chap. 2. Ex. 2.34
 * Hao Zhang
 * 2016.08.22
 * ex2.34.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int i = 0, &r = i;
    auto a = r;
    cout << "a " << a << endl;
    a = 42;
    cout << "a " << a << endl;

    const int ci = i, &cr = ci;
    auto b = ci;
    cout << "b " << b << endl;
    b = 42;
    cout << "b " << b << endl;

    auto c = cr;
    cout << "c " << c << endl;
    c = 42;
    cout << "c " << c << endl;
    
    auto d = &i;
    cout << "d " << d << endl;
    d = 0x42;
//    cout << "d " << d << endl;


    return 0;
}
