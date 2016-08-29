/*
 * C++ Primer
 * Chap. 5 Ex. 5.10
 * Hao Zhang
 * 2016.08.28
 * ex5.10.cpp
 */

#include <iostream>
using std::cout;
using std::cin;
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
        switch (ch) {
            case 'a': case 'A':
                ++num_a;
                break;
            case 'e': case 'E':
                ++num_e;
                break;
            case 'i': case 'I':
                ++num_i;
                break;
            case 'o': case 'O':
                ++num_o;
                break;
            case 'u': case 'U':
                ++num_u;
                break;
            default:
                break;
        }
    }

    cout << "# a = " << num_a << endl;
    cout << "# e = " << num_e << endl;
    cout << "# i = " << num_i << endl;
    cout << "# o = " << num_o << endl;
    cout << "# u = " << num_u << endl;
    return 0;
}
