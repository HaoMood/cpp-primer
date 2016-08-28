/*
 * C++ Primer
 * Chap. 3 Ex. 3.20
 * Hao Zhang
 * 2016.08.23
 * ex3.20.cpp
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
    int v;
    while (cin >> v) {
        vec.push_back(v);
    }

    if (vec.empty()) {
        cout << "empty" << endl;
        return -1;
    }

    for (vector<int>::size_type i = 0; i < vec.size() - 1; ++i) {
        cout << vec[i] + vec[i + 1] << " ";
    }
    cout << endl;

    for (vector<int>::size_type i = 0; i < vec.size() / 2; ++i) {
        cout << vec[i] + vec[vec.size() - i - 1] << " ";
    }
    if (vec.size() % 2 == 1) {
        cout << vec[vec.size() / 2];
    }
    cout << endl;

    return 0;
}
