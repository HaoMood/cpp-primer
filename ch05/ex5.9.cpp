/*
 * C++ Primer
 * Chap. 5 Ex. 5.9
 * Hao Zhang
 * 2016.08.28
 * ex5.9.cpp
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() 
{
    char ch = ' ';
    int num_a = 0;
    int num_e = 0;
    int num_i = 0;
    int num_o = 0;
    int num_u = 0;

    while (cin >> ch) {
        if (ch == 'a') {
            ++num_a;
        }
        else if (ch == 'e') {
            ++num_e;
        }
        else if (ch == 'i') {
            ++num_i;
        }
        else if (ch == 'o') {
            ++num_o;
        }
        else if (ch == 'u') {
            ++num_u;
        }
    }

    cout << "# a = " << num_a << endl;
    cout << "# e = " << num_e << endl;
    cout << "# i = " << num_i << endl;
    cout << "# o = " << num_o << endl;
    cout << "# u = " << num_u << endl;

    return 0;
}
