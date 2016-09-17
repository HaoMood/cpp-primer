/*
 * C++ Primer
 * Chap. 9 Ex. 9.26
 * Hao Zhang
 * 2016.09.17
 * main.cpp
 */

#include <list>
using std::list;

#include <vector>
using std::vector;

#include <iterator>

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    int ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
    vector<int> vec(std::begin(ia), std::end(ia));
    list<int> lst(std::begin(ia), std::end(ia));

    for (auto iter = vec.cbegin(); iter != vec.cend(); ) {
        if (*iter % 2 == 0) {
            iter = vec.erase(iter);
        }
        else {
            ++iter;
        }
    }

    for (auto iter = lst.cbegin(); iter != lst.cend(); ) {
        if (*iter % 2 == 1) {
            iter = lst.erase(iter);
        }
        else {
            ++iter;
        }
    }

    for (auto val: vec) {
        cout << val << " ";
    }
    cout << endl;

    for (auto val: lst) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
