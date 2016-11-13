/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.20
 * Hao Zhang
 * 2016.11.13  First release
 */

#include <vector>
using std::vector;
#include <string>
using std::string;
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  vector<string> vec = {"asd", "asdvew", "wve", "wevwe"}; 
  auto count = std::count_if(vec.cbegin(), vec.cend(), 
      [] (const string &s) { return s.size() > 6; });
  cout << count << endl;
  return 0;
}
