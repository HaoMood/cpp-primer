/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.9
 * Hao Zhang
 * 2016.11.11  Frist release
 */

#include <vector>
using std::vector;
#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include "elim_dup.h"

int main() {
  vector<string> svec = {
      "the", "quick", "red", "fox", "jumps", "over", "the", "slow",
      "red", "turtle"};
  elim_dup(svec);
  for (const auto & val: svec) {
    cout << val << " ";
  }
  cout << endl;
}
