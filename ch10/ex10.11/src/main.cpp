/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.11
 * Hao Zhang
 * 2016.11.13  Frist release
 */

#include <vector>
using std::vector;
#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include <algorithm>
#include "elim_dup.h"

bool lt(const string &s1, const string &s2) {
  return s1.size() < s2.size();
}

int main() {
  vector<string> svec = {
      "the", "quick", "red", "fox", "jumps", "over", "the", "slow",
      "red", "turtle"};
  elim_dup(svec);
  std::stable_sort(svec.begin(), svec.end(), lt);
  for (const auto & val: svec) {
    cout << val << " ";
  }
  cout << endl;
}
