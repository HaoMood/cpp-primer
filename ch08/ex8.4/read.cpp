/*
 * C++ Primer
 * Chap. 8 Ex. 8.4
 * Hao Zhang
 * 2016.09.13
 * read.cpp
 */

#include <fstream>
using std::ifstream;

#include <iostream>
using std::cerr;
using std::endl;

#include "read.h"

vector<string> read(string file_path)
{
    ifstream fin(file_path);
    vector<string> vec;
    if (!fin)
    {
        cerr << "[ERROR] Open file " << file_path << " error." << endl;
        return vec;
    }

    string val;
    while(getline(fin, val)) {
        vec.push_back(val);    
    }

    return vec;
}
