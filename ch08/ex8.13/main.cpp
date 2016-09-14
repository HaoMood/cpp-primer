/*
 * C++ Primer
 * Chap. 8 Ex. 8.11
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
using std::cout;
using std::endl;
using std::cerr;

#include <fstream>
using std::ifstream;

#include <sstream>
using std::istringstream;
using std::ostringstream;

#include "Person_info.h"

bool valid(const string &str)
{
    return true;
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        cerr << "[ERROR] Usage: ./main file_name" << endl;
        return -1;
    }
    vector<Person_info> vec_people;

    string line;
    ifstream fin(argv[1]);
    istringstream sin;
    while (getline(fin, line)) {
        Person_info people;
        sin.clear();
        sin.str(line);

        sin >> people.name;
        
        string phone_num;
        while (sin >> phone_num) {
            people.phones.push_back(phone_num);
        }
        vec_people.push_back(people);
    }

    for (const auto &people: vec_people) {
#ifndef NDEBUG
        cerr << "[DEBUG] " << people.name << endl;
#endif
        ostringstream sout_formatted;
        ostringstream sout_bad_nums;

        for (const auto &phone_num: people.phones) {
            if(!valid(phone_num)) {
                sout_bad_nums << phone_num << " ";
            }
            else {
                sout_formatted << phone_num << " ";
            }
        }

        if (sout_bad_nums.str().empty()) {
            cout << people.name << " " << sout_formatted.str() << endl;
        }
        else {
            cerr << "[ERROR] " << people.name << " " 
                 << sout_formatted.str() << endl;
        }
    }
    return 0;
}
