/*
 * C++ Primer
 * Chap. 8 Ex. 8.12
 * Hao Zhang
 * 2016.09.13
 * main.cpp
 */

#include <string>
using std::string;

#include <vector>
using std::vector;

#include <iostream>
using std::cin;

#include <sstream>
using std::istringstream;

#include "Person_info.h"

int main()
{
    vector<Person_info> vec_people;

    string line;
    while (getline(cin, line)) {
        istringstream sin(line);
        Person_info people;

        sin >> people.name;
        
        string phone_num;
        while (sin >> phone_num) {
            people.phones.push_back(phone_num);
        }
        vec_people.push_back(people);
    }
}
