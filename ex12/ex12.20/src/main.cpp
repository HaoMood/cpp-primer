/*
 * main.cpp
 * C++ Primer Chap. 12 Ex. 12.20
 * Hao Zhang
 * 2016.11.20  Frist release
 */

#include <iostream>
using std::cout;
using std::endl;
#include "Str_blob.h"

int main() {
  Str_blob b1;
  {
    Str_blob b2 = {"a", "an", "the"};
    b1 = b2;
    b2.push_back("about");
  }

  for (auto it = b1.begin(); it != b1.end(); it.incr()) {
    cout << it.deref() << " ";
  }
  cout << endl;
  return 0;
}
