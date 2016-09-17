/*
 * C++ Primer
 * Chap. 9 Ex. 9.11
 * Hao Zhang
 * 2016.09.14
 * main.cpp
 */

#include <vector>
using std::vector;

int main()
{
    vector<int> vec1;
    vector<int> vec2(vec1);
    vector<int> vec3 = vec1;
    vector<int> vec4(vec1.cbegin(), vec1.cend());
    vector<int> vec5{1, 2, 3, 4};
    vector<int> vec6 = {1, 2, 3, 4};
    vector<int> vec7(4);
    vector<int> vec8(4, 10);
    return 0;
}
