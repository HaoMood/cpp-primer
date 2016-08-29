/*
 * C++ Primer
 * Chap. 5 Ex. 5.6
 * Hao Zhang
 * 2016.08.28
 * ex5.6.cpp
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
    int grade = 51;
    string level = grade < 60? scores[0]: scores[(grade - 50) / 10]; 
    level += (grade == 100 || grade < 60)? "": 
        (grade % 10 > 7? "+": (grade % 10 < 3? "-": ""));


    cout << level << endl;
    return 0;
}
