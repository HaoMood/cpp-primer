/*
 * C++ Primer
 * Chap. 6 Ex. 6.25
 * Hao Zhang
 * 2016.09.02
 * main.cpp
 */

#include <iostream>
using std::cout;
using std::cerr;
using std::endl;

#include <string>
using std::string;

int main(int argc, char *argv[])
{
    if (argc != 3) {
        cerr << "Wrong # of arguments" << endl;
        return -1;
    }

    string s1 = argv[1];
    string s2 = argv[2];
    string cat = s1 + " " + s2;
    cout << cat << endl;
    return 0;
}
