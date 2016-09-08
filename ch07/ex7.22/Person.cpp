/*
 * C++ Primer
 * Chap. 7 Ex. 7.22
 * Hao Zhang
 * 2016.09.08
 * Person.cpp
 */

#include "Person.h"

ostream &print(ostream &out, const Person &person)
{
    out << person._name << " " << person._addr;
    return out;
}

istream &read(istream &in, Person person)
{
    in >> person._name >> person._addr;
    return in;
}
