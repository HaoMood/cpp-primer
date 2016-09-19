/*
 * C++ Primer
 * Chap. 9 Ex. 9.50
 * Hao Zhang
 * 2016.09.19
 * main.cpp
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
    vector<string> vec = {"1", "2", "3", "4", "5"};

//    int sum = 0;
    float sum = 0;
    for (const auto &val: vec) {
//        sum += stoi(val);
        sum += stof(val);
    }

    cout << sum << endl;
    return 0;
}
