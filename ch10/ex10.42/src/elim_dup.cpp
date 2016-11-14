/*
 * elim_dup.cpp
 * C++ Primer Chap. 10 Ex. 10.9
 * Hao Zhang
 * 2016.11.11  Frist release
 */

#include <list>
using std::list;
#include <string>
using std::string;
#include <algorithm>
#include "elim_dup.h"

void elim_dup(list<string> &slist) {
  slist.sort();
  slist.unique();
}
