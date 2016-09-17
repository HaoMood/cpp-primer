/*
 * C++ Primer
 * Chap. 9 Ex. 9.5
 * Hao Zhang
 * 2016.09.14
 * find.h
 */

#ifndef FIND_H_
#define FIND_H_

#include <vector>
using std::vector;

vector<int>::const_iterator find(vector<int>::const_iterator begin, 
    vector<int>::const_iterator end, int sought);

#endif
