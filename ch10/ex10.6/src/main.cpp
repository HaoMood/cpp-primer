/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.6
 * Hao Zhang
 * 2016.11.11  First release
 */

#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <algorithm>

int main() {
  vector<int> ivec = {1, 2, 3, 4, 5};
  std::fill_n(ivec.begin(), ivec.size(), 0);
  for (const auto val: ivec) {
    cout << val << " ";
  }
  cout << endl;
  return 0;
}
