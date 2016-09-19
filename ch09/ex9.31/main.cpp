/*
 * C++ Primer
 * Chap. 9 Ex. 9.31
 * Hao Zhang
 * 2016.09.18
 * main.cpp
 */

#include <list>
using std::list;

#include <iostream>
using std::cout;
using std::endl;

#include <forward_list>
using std::forward_list;

int main()
{
    list<int> lst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto iter = lst.cbegin(); iter != lst.cend(); ) {
        if (*iter % 2 == 1) {
            iter = lst.insert(iter, *iter);
            ++iter;
            ++iter;
        }
        else {
            iter = lst.erase(iter);
        }
    }

    for (auto val: lst) {
        cout << val << " ";
    }
    cout << endl;


    forward_list<int> flst = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto prev = flst.cbefore_begin(), curr = flst.cbegin();
         curr != flst.cend(); ) {
        if (*curr % 2 == 0) {
            curr = flst.erase_after(prev);
        }
        else {
            flst.insert_after(prev, *curr);
            prev = curr;
            ++curr;
        }
    }

    for (auto val: flst) {
        cout << val << " ";
    }
    cout << endl;
    return 0;
}
