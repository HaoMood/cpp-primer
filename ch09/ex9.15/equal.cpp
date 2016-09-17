/*
 * C++ Primer
 * Chap. 9 Ex. 9.16
 * Hao Zhang
 * 2016.09.16
 * equal.cpp
 */

#include <vector>
using std::vector;

bool equal(const vector<int> &vec1, const vector<int> &vec2)
{
    if (vec1.size() != vec2.size()) {
        return false;
    }

    for (vector<int>::size_type i = 0; i != vec1.size(); ++i) {
        if (vec1[i] != vec2[i]) {
            return false;
        }
    }
    return true;
}
