/*
 * C++ Primer
 * Chap. 8 Ex. 8.11
 * Hao Zhang
 * 2016.09.13
 * Person_info.h
 */

#ifndef PERSON_INFO_H_
#define PERSON_INFO_H_

#include <string>
using std::string;

#include <vector>
using std::vector;

class Person_info
{
public:
    string name;
    vector<string> phones;
};

#endif
