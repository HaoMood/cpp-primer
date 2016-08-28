/*
 * C++ Primer
 * Chap. 3 Ex. 3.40
 * Hao Zhang
 * 2016.08.26
 * ex3.40.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

#include <cstring>

int main()
{
    char s1[] = "hello ";
    char s2[] = "world";
    char sout[12];
    strcpy(sout, s1);
    strcat(sout, s2);
    cout << sout << endl;
    return 0;
}
