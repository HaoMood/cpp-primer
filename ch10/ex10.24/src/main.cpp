/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.24
 * Hao Zhang
 * 2016.11.13  First release
 */

#include <vector>
using std::vector;
#include <string>
using std::string;
#include <functional>
using std::placeholders::_1;
#include <algorithm>
#include <iostream>
using std::cout;
using std::cerr;
using std::endl;

bool gt(const int i, string::size_type size) {
  return i > static_cast<int>(size);
}

int main() {
  vector<int> ivec = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  auto it = std::find_if(ivec.cbegin(), ivec.cend(), 
      std::bind(gt, _1, string("asd").size()));
  if (it != ivec.cend()) {
    cout << *it << endl;
  }
  else {
    cerr << "Not found." << endl;
  }
  return 0;
}
