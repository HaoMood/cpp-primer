/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.35
 * Hao Zhang
 * 2016.11.14  First release
 */

#include <vector>
using std::vector;
#include <iostream>
using std::cout;
using std::endl;

int main() {
  vector<int> ivec = {1, 2, 3, 4, 5};
  auto before_begin = --ivec.cbegin();
  for (auto it = --ivec.cend(); it != before_begin; --it) {
    cout << *it << " ";
  }
  cout << endl;
  return 0;
}
