/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.30
 * Hao Zhang
 * 2016.11.14  First release
 */

#include <vector>
using std::vector;
#include <algorithm>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <iterator>
using std::istream_iterator;
using std::ostream_iterator;

int main() {
  istream_iterator<int> in_it(cin);
  istream_iterator<int> in_end;
  vector<int> ivec(in_it, in_end);

  std::sort(ivec.begin(), ivec.end());

  ostream_iterator<int> out_end(cout, " ");
  std::copy(ivec.cbegin(), ivec.cend(), out_end);
  cout << endl;
  return 0;
}
