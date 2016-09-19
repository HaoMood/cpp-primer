/*
 * C++ Primer
 * Chap. 9 Ex. 9.51
 * Hao Zhang
 * 2016.09.19
 * main.cpp
 */

#include "Date.h"

int main()
{
    Date data("January 1, 1900");
    data.show();
    Date data2("1/1/1900");
    data2.show();
    Date data3("Jan 1, 1900");
    data3.show();
    Date data4("Illegal 1, 1900");
    data4.show();
    return 0;
}
