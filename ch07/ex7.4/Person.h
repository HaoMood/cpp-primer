/*
 * C++ Primer
 * Chap. 7 Ex. 7.4
 * Hao Zhang
 * 2016.09.08
 * Person.h
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <string>
using std::string;

struct Person
{
    string _name;
    string _addr;

    string name() const
    {
        return _name;
    }

    string addr() const
    {
        return _addr;
    }
};

#endif
