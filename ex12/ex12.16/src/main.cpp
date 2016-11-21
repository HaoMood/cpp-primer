/*
 * main.cpp
 * C++ Primer Chap. 12 Ex. 12.16
 * Hao Zhang
 * 2016.11.21  Frist release
 */

#include <memory>
using std::unique_ptr;    

int main() {
  unique_ptr<int> p1(new int(42));
  unique_ptr<int> p2(p1);
  unique_ptr<int> p3;
  p3 = p1;
  return 0;
}
