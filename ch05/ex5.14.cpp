/*
 * C++ Primer
 * Chap. 5 Ex. 5.14
 * Hao Zhang
 * 2016.08.28
 * ex5.14.cpp
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <string>
using std::string;

int main()
{
    string s_dup;
    if (!(cin >> s_dup)) {
        cout << "No valid input" << endl;
        return -1;
    }

    string s;
    int dup_count = 1;
    int max_dup_count = 1;
    string max_dup_word = s_dup;
    while (cin >> s) {
        if (s == s_dup) {
            ++dup_count;
        }
        else {
            if (dup_count > max_dup_count) {
                max_dup_count = dup_count;
                max_dup_word = s_dup;
            }
            s_dup = s;
            dup_count = 1;
        }
    }

    if (dup_count > max_dup_count) {
        max_dup_count = dup_count;
        max_dup_word = s_dup;
    }

    cout << "word " << max_dup_word << " occurred " << max_dup_count 
         << " times" << endl;
    return 0;
}
