/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.19
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
#include "biggest.h"

int main() {
  vector<string> svec = {
      "the", "quick", "red", "fox", "jumps", "over", "the", "slow",
      "red", "turtle"};
  biggest(svec, 5);
  return 0;
}
