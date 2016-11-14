/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.37
 * Hao Zhang
 * 2016.11.14  First release
 */

#include <vector>
using std::vector;
#include <list>
using std::list;
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  vector<int> ivec = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  list<int> ilist(ivec.crbegin() + 2, ivec.crend() - 3);
  std::for_each(ilist.cbegin(), ilist.cend(), 
      [] (int val) { cout << val << " "; });
  cout << endl;
  return 0;
}
