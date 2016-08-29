/*
 * C++ Primer
 * Chap. 5 Ex. 5.17
 * Hao Zhang
 * 2016.08.28
 * ex5.17.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int main()
{
    vector<int> vec1 = {0, 1, 1};
    vector<int> vec2 = {0, 1, 1, 2, 3, 5};

    for (auto it1 = vec1.cbegin(), it2 = vec2.cbegin();
            it1 != vec1.cend() && it2 != vec2.cend(); ++it1, ++it2) {
        if (*it1 != *it2) {
            cout << "false" << endl;
            return -1;
        }
    }
    cout << "true" << endl;
    return 0;
}
