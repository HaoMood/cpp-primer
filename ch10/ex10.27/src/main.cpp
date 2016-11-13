/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.27
 * Hao Zhang
 * 2016.11.13  First release
 */

#include <vector>
using std::vector;
#include <algorithm>
#include <iterator>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  vector<int> vec_from = {1, 2, 3, 4, 3, 2, 1};
  vector<int> vec_to;
  std::sort(vec_from.begin(), vec_from.end());
  std::unique_copy(vec_from.cbegin(), vec_from.cend(), 
      std::back_inserter(vec_to));
  for (const auto val: vec_to) {
    cout << val << " "; 
  }
  cout << endl;
  return 0;
}
