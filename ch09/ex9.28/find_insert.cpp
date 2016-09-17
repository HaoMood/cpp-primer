/*
 * C++ Primer
 * Chap. 9 Ex. 9.28
 * Hao Zhang
 * 2016.09.17
 * find_insert.cpp
 */

#include "find_insert.h"

forward_list<string>::const_iterator find_insert(
    forward_list<string> &flst, const string &str1, const string &str2) 
{
    auto prev = flst.cbefore_begin();
    for (auto curr = flst.cbegin(); curr != flst.cend(); 
         prev = curr, ++curr) {
        if (*curr == str1) {
            return flst.insert_after(curr, str2);
        }
    }
    return flst.insert_after(prev, str2);
}
