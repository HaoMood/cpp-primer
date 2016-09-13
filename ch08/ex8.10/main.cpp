/*
 * C++ Primer
 * Chap. 8 Ex. 8.10
 * Hao Zhang
 * 2016.09.13
 * main.cpp
 */

#include <iostream>
using std::cerr;
using std::endl;

#include "File_content.h"

int main(int argc, char *argv[])
{
    if (argc != 2) {
        cerr << "[ERROR] Usage: ./main file_name" << endl;
        return -1;
    }
    
    File_content file_content;
    file_content.read(argv[1]);
    file_content.print();
    return 0;
}
