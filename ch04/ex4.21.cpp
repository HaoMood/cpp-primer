/*
 * C++ Primer
 * Chap. 4 Ex. 4.21
 * Hao Zhang
 * 2016.08.27
 * ex4.21.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> vec = {1, 2, 3, 4, 5, 6, 7};
    for (auto &val: vec) {
        val = val % 2 == 1? 2 * val: val;
    }

    for (auto val: vec) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
