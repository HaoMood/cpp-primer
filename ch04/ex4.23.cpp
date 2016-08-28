/*
 * C++ Primer
 * Chap. 4 Ex. 4.23
 * Hao Zhang
 * 2016.08.27
 * ex4.23.cpp
 */

#include <string>
using std::string;

int main()
{
    string s = "word";
    string p1 = s + s[s.size() - 1] == 's'? "": "s";
    return 0;
}
