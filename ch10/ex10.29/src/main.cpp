/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.29
 * Hao Zhang
 * 2016.11.14  First release
 */

#include <vector>
using std::vector;
#include <string>
using std::string;
#include <algorithm>
#include <fstream>
using std::ifstream;
#include <iostream>
using std::cout;
using std::cerr;
using std::endl;
#include <iterator>
using std::istream_iterator;
using std::ostream_iterator;

int main() {
  ifstream fin("res/text.txt");
  if (!fin) {
    cerr << "Open file res/text.txt error." << endl;
    return -1;
  }

  istream_iterator<string> in_it(fin);
  istream_iterator<string> in_end;
  vector<string> svec(in_it, in_end);

  ostream_iterator<string> out_it(cout, "\n");
  std::copy(svec.cbegin(), svec.cend(), out_it);
  return 0;
}
