/*
 * main.cpp
 * C++ Primer Chap. 11 Ex. 11.12
 * Hao Zhang
 * 2016.11.15  Frist release
 */

#include <vector>
using std::vector;
#include <string>
using std::string;
#include <utility>
using std::pair;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  vector<pair<string, int>> vec;
  string str;
  int i;
  while (cin >> str >> i) {
//    vec.push_back(std::make_pair(str, i));
//    vec.push_back({str, i});
    vec.push_back(pair<string, int>(str, i));
  }

  for (const auto &val: vec) {
    cout << val.first << " " << val.second << endl;
  }
  return 0;
}
