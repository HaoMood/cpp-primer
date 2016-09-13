/*
 * C++ Primer
 * Chap. 8 Ex. 8.1
 * Hao Zhang
 * 2016.09.13
 * main.cpp
 */

#include <sstream>
using std::istringstream;

#include "read_and_print.h"

int main()
{
    istringstream sin("asd asd e wa v erw ef  v");
    read_and_print(sin);
    return 0;
}
