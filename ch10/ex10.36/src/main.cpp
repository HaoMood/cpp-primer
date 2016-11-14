/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.36
 * Hao Zhang
 * 2016.11.14  First release
 */

#include <list>
using std::list;
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;
#include <iterator>
using std::ostream_iterator;

int main () {
  list<int> ilist = {0, 1, 2, 3, 0, 2, 3, 0, 0, 3, 4, 4};
  auto it = std::find(ilist.crbegin(), ilist.crend(), 0);
  ostream_iterator<int> out_it(cout, " ");
  std::copy(it.base(), ilist.cend(), out_it);
  cout << endl;
  return 0;
}
