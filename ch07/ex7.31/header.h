/*
 * C++ Primer
 * Chap. 7 Ex. 7.31
 * Hao Zhang
 * 2016.09.10
 * header.h
 */

#ifndef HEADER_H_
#define HEADER_H_

class Y;

class X
{
    int a = 0;
    Y *py = nullptr;
};

class Y
{
    int b = 0;
    X x;
}

#endif 
