/*
 * C++ Primer
 * Chap. 8 Ex. 8.4
 * Hao Zhang
 * 2016.09.13
 * main.cpp
 */

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <iostream>
using std::cout;
using std::endl;

#include "read.h"

int main()
{
    vector<string> vec = read("file.txt");
//    vector<string> vec = read("not_exist.txt");
    for (auto &val: vec) {
        cout << val << endl;
    }
    return 0;
}
