/*
 * main.cpp
 * C++ Primer Chap. 13 Ex. 13.13
 * Hao Zhang
 * 2016.11.22  Frist release
 */

#include <vector>
using std::vector;
#include "X.h"

void g(const X &rx) {
  vector<X> vec;
  vec.push_back(rx);
}

void f(const X &rx, X x) {
  vector<X> vec;
  vec.push_back(rx);
  vec.push_back(x);
}

int main () {
  X *px = new X;
//  f(*px, *px);
  g(*px);
  delete px;
  return 0;
}
