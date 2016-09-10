/*
 * C++ Primer
 * Chap. 7 Ex. 7.23
 * Hao Zhang
 * 2016.09.08
 * main.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

#include "Screen.h"

int main()
{
#if 0
    Screen screen;
    char ch = screen.get();
    cout << ch << endl;
    ch = screen.get(0, 0);
    cout << ch << endl;

    screen.move(4, 0).set('#');

    Screen ordinary_screen(5, 3);
    const Screen const_screen(5, 3);
    ordinary_screen.set('#').display(cout);
    cout << endl;
    const_screen.display(cout);
    cout << endl;
#endif

    Screen screen(5, 5, 'X');
    screen.move(4, 0).set('#').display(cout);
    cout << endl;
    screen.display(cout);
    cout << endl;
    return 0;
}
