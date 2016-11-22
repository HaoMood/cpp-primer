/*
 * X.h
 * C++ Primer Chap. 13 Ex. 13.13
 * Hao Zhang
 * 2016.11.22  Frist release
 */

#ifndef X_H_
#define X_H_

#include <iostream>
using std::cout;
using std::endl;

class X {
public:
  X() {
    cout << "X()" << endl;
  }

  X(const X &) {
    cout << "X(const X &)" << endl;
  }

  ~X() {
    cout << "~X()" << endl;
  }

  X &operator=(const X&) {
    cout << "X &operator=(const X&)" << endl;
    return *this;
  }
};

#endif // X_H_
