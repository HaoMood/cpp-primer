/*
 * C++ Primer
 * Chap. 5 Ex. 5.12
 * Hao Zhang
 * 2016.08.22
 * ex5.12.cpp
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
    char ch = ' ';
    bool f = false;
    int ff = 0;
    int fl = 0;
    int fi = 0;

    while (cin >> ch) {
        switch (ch) {
            case 'f':
                if (f) {
                    ++ff;
                }
                f = true;
                break;
            case 'i':
                if (f) {
                    ++fi;
                }
                f = false;
                break;
            case 'l':
                if (f) {
                    ++fl;
                }
                f = false;
                break;
            default:
                f = false;
                break;
        }
    }

    cout << "# ff = " << ff << endl;
    cout << "# fl = " << fl << endl;
    cout << "# fi = " << fi << endl;
    return 0;
}
