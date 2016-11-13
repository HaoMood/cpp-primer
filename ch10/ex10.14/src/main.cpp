/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.14
 * Hao Zhang
 * 2016.11.13  First release
 */

#include <iostream>
using std::cout;
using std::endl;

int main() {
  auto f = [] (const int a, const int b) { return a + b; };
  cout << f(1, 2) << endl;
}
