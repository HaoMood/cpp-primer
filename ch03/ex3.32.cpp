/*
 * C++ Primer
 * Chap. 3 Ex 3.32
 * Hao Zhang
 * 2016.08.25
 * ex3.32.cpp
 */

#include <iostream>
using std::cout;
using std::endl;

#include <cstddef>

#include <vector>
using std::vector;

int main()
{
    int A[10];
    for (size_t i = 0; i < 10; ++i) {
        A[i] = i;
    }

    int B[10];
    for (size_t i = 0; i < 10; ++i) {
        B[i] = A[i];
    }

    for (auto val: B) {
        cout << val << " ";
    }
    cout << endl;


    vector<int> A_vec(10);
    for (vector<int>::size_type i = 0; i != A_vec.size(); ++i) {
        A_vec[i] = i;
    }

    vector<int> B_vec = A_vec;
    for (auto val: B_vec) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
