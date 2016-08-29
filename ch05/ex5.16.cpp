/*
 * C++ Primer
 * Chap. 5 Ex. 5.16
 * Hao Zhang
 * 2016.08.28
 * ex5.16.cpp
 */

#include <iostream>
using std::cout;
using std::endl;
using std::cin;

#include <vector>
using std::vector;

int main()
{
    vector<int> vec;
    int i;
    for (; cin >> i; ) {
        vec.push_back(i);
    }

    for (auto it = vec.cbegin(); it != vec.cend(); ++it) {
        cout << *it << " ";
    }
    cout << endl;


    vector<int> vec2;
    while (cin >> i) {
        vec2.push_back(i);
    }
    auto it2 = vec2.cbegin();
    while (it2 != vec2.cend()) {
        cout << *it2++ << " ";
    }
    cout << endl;

    return 0;
}
