/*
 * C++ Primer
 * Chap. 5 Ex. 5.5
 * Hao Zhang
 * 2016.08.28
 * ex5.5.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

#include <string>
using std::string;

int main()
{
    vector<string> scores = {"F", "D", "C", "B", "A", "A++"};
    int grade = 88;
    string level;

    if (grade < 60) {
        level = scores[0];
    }
    else {
        level = scores[(grade - 50) / 10];
        if (grade % 10 > 7) {
            level += "+";
        }
        else if (grade != 100 && grade % 10 < 3) { 
            level += "-";
        }
    }

    cout << level << endl;
    return 0;
}
