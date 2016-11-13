/*
 * main.cpp
 * C++ Primer Chap.10 Ex. 10.21
 * Hao Zhang
 * 2016.11.13  First release
 */

#include <iostream>
using std::cout;
using std::endl;

int main() {
  int count = 5;
  auto f = [&count] () -> int 
      { if (count > 0) {--count; return false;} else {return true;} };
  for (int i = 0; i != 10; ++i) {
    f();
  }
  cout << count << endl;
  return 0; 
}
