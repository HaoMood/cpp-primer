/*
 * C++ Primer
 * Chap. 9 Ex. 9.28
 * Hao Zhang
 * 2016.09.28
 * find_insert.h
 */

#ifndef FIND_INSERT_H_
#define FIND_INSERT_H_

#include <string>
using std::string;

#include <forward_list>
using std::forward_list;

forward_list<string>::const_iterator find_insert(
    forward_list<string> &flst, const string &str1, const string &str2);

#endif
