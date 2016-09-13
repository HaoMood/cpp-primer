/*
 * C++ Primer
 * Chap. 8 Ex. 8.10
 * Hao Zhang
 * 2016.09.13
 * File_content.cpp
 */

#include <fstream>
using std::ifstream;

#include <sstream>
using std::istringstream;

#include <stdexcept>
using std::runtime_error;

#include <iostream>
using std::cout;
using std::endl;

#include "File_content.h"

void File_content::read(const string &file_path)
{
    ifstream fin(file_path);
    if (!fin) {
        throw runtime_error("[ERROR] Cannot open " + file_path);
    }

    string line;
    while(getline(fin, line)) {
        _content.push_back(line);
    }
}

void File_content::print() const
{
    for (auto &line: _content) {
        istringstream sin(line);
        string word;
        while (sin >> word) {
            cout << word << endl;
        }
    }
}
