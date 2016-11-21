/*
 * main.cpp
 * C++ Primer Chap. 12 Ex. 12.26
 * Hao Zhang
 * 2016.11.21  Frist release
 */

#include <string>
using std::string;
#include <memory>
using std::allocator;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  allocator<string> alloc;
  auto const p = alloc.allocate(5);
  auto q = p;
  string s;
  while (q != p + 5 && cin >> s) {
    alloc.construct(q++, s);
  }

  while (q != p) {
    cout << *--q << endl;
    alloc.destroy(q);
  }
  alloc.deallocate(p, 5);
  return 0;
}
