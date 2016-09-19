/*
 * C++ Primer
 * Chap. 9 Ex. 9.52
 * Hao Zhang
 * 2016.09.19
 * main.cpp
 */

#include <stack>
using std::stack;

#include <string>
using std::string;

#include <iostream>
using std::cout;
using std::endl;

int main()
{
    const string expr = "1 * (2 + 3)";
    bool has_seen = false;
    stack<char> stk;
    for (auto val: expr) {
        if (val == '(') {
            has_seen = true;
        }
        else if (val == ')') {
            has_seen = false;
            while (!stk.empty()) {
                cout << stk.top() << endl;
                stk.pop();
            }
        }
        if (has_seen) {
            stk.push(val);
        }
    }
    return 0;
}
