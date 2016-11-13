/*
 * biggest.cpp
 * C++ Primer Chap. 10 Ex. 10.19
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
#include "biggest.h"

void biggest(vector<string> vec, vector<string>::size_type size) {
  std::sort(vec.begin(), vec.end());
  auto unique_end = std::unique(vec.begin(), vec.end());
  vec.erase(unique_end, vec.end());
  auto gt_begin = std::stable_partition(vec.begin(), vec.end(), 
      [size] (const string &s) { return s.size() < size; });
  std::for_each(gt_begin, vec.end(), 
      [] (const string &s) { cout << s << endl; });
}
