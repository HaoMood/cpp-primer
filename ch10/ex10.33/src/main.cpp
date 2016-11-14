/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.33
 * Hao Zhang
 * 2016.11.14  First release
 */

#include <vector>
using std::vector;
#include <algorithm>
#include <fstream>
using std::ifstream;
using std::ofstream;
#include <iostream>
using std::cerr;
using std::endl;
#include <iterator>
using std::istream_iterator;
using std::ostream_iterator;

int main() {
  ifstream fin("res/input.txt");
  if (!fin) {
    cerr << "File res/input.txt open error." << endl;
    return -1;
  }
  istream_iterator<int> in_it(fin);
  istream_iterator<int> in_end;
  vector<int> ivec(in_it, in_end);  

  auto even_begin = std::stable_partition(ivec.begin(), ivec.end(),
      [] (int val) { return val % 2 == 1; });

  ofstream fout_odd("res/odd.txt");
  ofstream fout_even("res/even.txt");
  if (!fout_odd) {
    cerr << "File res/odd.txt open error." << endl;
    return -1;
  }
  if (!fout_even) {
    cerr << "File res/even.txt open error." << endl;
    return -1;
  }
  ostream_iterator<int> out_odd_it(fout_odd, " ");
  std::copy(ivec.begin(), even_begin, out_odd_it);
  fout_odd << endl;
  ostream_iterator<int> out_even_it(fout_even, "\n");
  std::copy(even_begin, ivec.end(), out_even_it);
  return 0;
}
