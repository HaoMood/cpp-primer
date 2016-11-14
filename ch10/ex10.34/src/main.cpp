/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.34
 * Hao Zhang
 * 2016.11.14  First release
 */

#include <vector>
using std::vector;
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  vector<int> ivec = {1, 2, 3, 4, 5};
  std::for_each(ivec.crbegin(), ivec.crend(), 
      [] (int val) { cout << val << " "; });
  cout << endl;
  return 0;
}
