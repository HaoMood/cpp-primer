/*
 * C++ Primer
 * Chap. 4 Ex. 4.22
 * Hao Zhang
 * 2016.08.27
 * ex4.22.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

#include <string>
using std::string;

int main()
{
    unsigned grade = 45;
    
    string level = grade > 90? "high pass": 
        grade <= 75 && grade >= 60? "low pass":
        grade < 60? "fail": "pass";

    cout << level << endl;

    string level2;
    if (grade > 90) {
        level2 = "high pass";
    }
    else if (grade <= 75 && grade >= 60) {
        level2 = "low pass";
    }
    else if (grade < 60) {
        level2 = "fail";
    }
    else {
        level2 = "pass";
    }
    cout << level2 << endl;

    return 0;
}
