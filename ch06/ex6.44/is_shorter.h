/*
 * C++ Primer
 * Chap. 6 Ex. 6.44
 * Hao Zhang
 * 2016.09.06
 * is_shorter.h
 */

#ifndef IS_SHORTER_H_
#define IS_SHORTER_H_

inline bool is_shorter(const string &s1, const string &s2)
{
    return s1.size() < s2.size();
}

#endif
