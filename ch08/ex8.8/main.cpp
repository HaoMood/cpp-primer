/*
 * C++ Primer
 * Chap. 8 Ex. 8.6
 * Hao Zhang
 * 2016.09.13
 * main.cpp
 */

#include <fstream>
using std::ifstream;
using std::ofstream;

#include <iostream>
using std::cout;
using std::cerr;
using std::endl;

#include "Sales_data.h"

int main(int argc, char *argv[])
{
    if (argc != 3) {
        cerr << "[ERROR] Useage: ./main input_file output_file" << endl;
        return -1;
    }
    ifstream fin(argv[1]);
    ofstream fout(argv[2], ofstream::app);

    Sales_data total;
    if (!read(fin, total)) {
        cerr << "[ERROR] No avalible data" << endl;
        return -1;
    }
#ifndef NDEBUG
        print(cout, total) << endl;
#endif

    Sales_data item;
    while (read(fin, item)) {
#ifndef NDEBUG
        print(cout, item) << endl;
#endif
        if (item.get_isbn() == total.get_isbn()) {
            total.combine(item);
        }
        else {
            print(fout, total) << endl;
            total = item;
        }
    }
    print(fout, total) << endl;
    return 0;
}
