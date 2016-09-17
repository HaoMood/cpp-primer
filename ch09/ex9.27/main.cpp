/*
 * C++ Primer
 * Chap. 9 Ex. 9.27
 * Hao Zhang
 * 2016.09.27
 */

#include <forward_list>
using std::forward_list;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    forward_list<int> flst{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto curr = flst.cbegin(), prev = flst.cbefore_begin();
         curr != flst.cend(); ) {
        if (*curr % 2 == 1) {
            curr = flst.erase_after(prev);
        }
        else {
            prev = curr;
            ++curr;
        }
    }

    for (const auto val: flst) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
