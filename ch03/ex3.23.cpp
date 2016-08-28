/*
 * C++ Primer
 * Chap. 3 Ex. 3.23
 * Hao Zhang
 * 2016.08.24
 * ex3.23.cpp
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> vec;
    for (int i = 0; i != 10; ++i) {
        vec.push_back(i);
    }

    for (auto it = vec.begin(); it != vec.end(); ++it) {
        *it *= 2;
    }

    for (auto val: vec) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
