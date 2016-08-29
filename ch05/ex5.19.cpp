/*
 * C++ Primer
 * Chap. 5 Ex. 5.19
 * Hao Zhang
 * 2016.08.29
 * ex5.19.cpp
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    string ret;
    do {
        string s1, s2;
        cin >> s1 >> s2;
        if (s1 < s2) {
            cout << s1 << " is smaller" << endl;
        }
        else if (s1 == s2) {
            cout << s1 << " is equal to " << s2 << endl;
        }
        else {
            cout << s1 << " is larger" << endl;
        }

        cout << "More? Enter yes or no: ";
        cin >> ret;
    }
    while (!ret.empty() && ret[0] == 'y');

    return 0;
}
