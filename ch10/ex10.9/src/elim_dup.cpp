/*
 * elim_dup.cpp
 * C++ Primer Chap. 10 Ex. 10.9
 * Hao Zhang
 * 2016.11.11  Frist release
 */

#include <vector>
using std::vector;
#include <string>
using std::string;
#include <algorithm>
#include "elim_dup.h"

void elim_dup(vector<string> &svec) {
  std::sort(svec.begin(), svec.end());
  auto uniq_end = std::unique(svec.begin(), svec.end());
  svec.erase(uniq_end, svec.end());
}
