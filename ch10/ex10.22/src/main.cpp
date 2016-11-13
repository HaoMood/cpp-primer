/*
 * main.cpp
 * C++ Primer Chap.10 Ex. 10.22
 * Hao Zhang
 * 2016.11.13  First release
 */

#include <vector>
using std::vector;
#include <string>
using std::string;
#include <algorithm>
#include <functional>
using std::placeholders::_1;
#include <iostream>
using std::cout;
using std::endl;

bool lt(const string &s, string::size_type size) {
  return s.size() <= size;
}

int main() {
  vector<string> vec = {"asdwe", "waevwe", "wevwev", "wc"};
  auto count = std::count_if(vec.begin(), vec.end(), 
      std::bind(lt, _1, 6));
  cout << count << endl;
  return 0;
}
