/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.9
 * Hao Zhang
 * 2016.11.11  Frist release
 */

#include <list>
using std::list;
#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;
#include "elim_dup.h"

int main() {
  list<string> slist = {
      "the", "quick", "red", "fox", "jumps", "over", "the", "slow",
      "red", "turtle"};
  elim_dup(slist);
  for (const auto & val: slist) {
    cout << val << " ";
  }
  cout << endl;
}
