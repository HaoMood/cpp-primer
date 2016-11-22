/*
 * main.cpp
 * C++ Primer Chap. 13 Ex. 13.17 
 * Hao Zhang
 * 2016.11.22  Frist release
 */

#include <iostream>
using std::cout;
using std::endl;
#include "Numbered.h"

void f(Numbered &num) {
  cout << num.id << endl;
}

int main() {
  Numbered a, b = a, c = b;
  f(a);
  f(b);
  f(c);
  return 0;
}
