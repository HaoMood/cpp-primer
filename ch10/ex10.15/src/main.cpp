/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.15
 * Hao Zhang
 * 2016.11.13  First release
 */

#include <iostream>
using std::cout;
using std::endl;

int main() {
  const int para = 3;
  auto f = [para] (const int a) { return para + a; };
  cout << f(3) << endl;
  return 0;
}
