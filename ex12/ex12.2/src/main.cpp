/*
 * main.cpp
 * C++ Primer Chap. 12 Ex. 12.2
 * Hao Zhang
 * 2016.11.20  Frist release
 */

#include "Str_blob.h"

int main() {
  Str_blob b1;
  {
    Str_blob b2 = {"a", "an", "the"};
    b1 = b2;
    b2.push_back("about");
  }
  return 0;
}
