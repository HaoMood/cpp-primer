/*
 * C++ Primer
 * Chap. 9 Ex. 9.14
 * Hao Zhang
 * 2016.09.16
 * main.cpp
 */

#include <list>
using std::list;

#include <vector>
using std::vector;

#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    list<char *> list_char{"Hello", "World"};
    vector<string> vec_str;
    vec_str.assign(list_char.cbegin(), list_char.cend());

    for (const auto &val: vec_str) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
