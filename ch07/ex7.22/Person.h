/*
 * C++ Primer
 * Chap. 7 Ex. 7.22
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

class Person
{
private:
    string _name;
    string _addr;

public:
    string name() const {
        return _name;
    }

    string addr() const {
        return _addr;
    }

    friend ostream &print(ostream &out, const Person &person);
    friend istream &read(istream &in, Person person);
    
};

ostream &print(ostream &out, const Person &person);
istream &read(istream &in, Person person);

#endif
