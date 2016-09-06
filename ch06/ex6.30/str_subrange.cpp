/*
 * C++ Primer
 * Chap. 6 Ex. 6.30
 * Hao Zhang
 * 2016.09.03
 * str_subrange.cpp
 */

#include <string>
using std::string;

bool str_subrange(const string &str1, const string &str2)
{
    if (str1.size() == str2.size()) {
        return str1 == str2;
    }

    auto size = str1.size() < str2.size()? str1.size(): str2.size();

    for (string::size_type i = 0; i != size; ++i) {
        if (str1[i] != str2[i]) {
            return;
        }
    }
}
