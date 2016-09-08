/*
 * C++ Primer
 * Chap. 7 Ex. 7.9
 * Hao Zhang
 * 2016.09.08
 * Person.h
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <string>
using std::string;

#include <istream>
using std::istream;

#include <ostream>
using std::ostream;

struct Person
{
    string _name;
    string _addr;

    Person() = default;
    Person(string name, string add): _name(name), _addr(addr) 
    {}

    string name() const
    {
        return _name;
    }

    string addr() const
    {
        return _addr;
    }
};

ostream &print(ostream &out, const Person &person);
istream &read(istream &in, Person person);

#endif
