/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.32
 * Hao Zhang
 * 2016.11.14  First release
 */

#include <vector>
using std::vector;
#include <algorithm>
#include "Sales_item.h"

int main() {
  vector<Sales_item> vec = {
      Sales_item("123", 10, 23), Sales_item("321", 1, 21), 
      Sales_item("123", 2, 20), Sales_item("111", 2, 12) };
  std::sort(vec.begin(), vec.end(), 
      [] (const Sales_item &item1, const Sales_item &item2) 
      { return item1.isbn() < item2.isbn(); });
  auto sum_item = std::accumulate(vec.begin(), vec.end(), );
  return 0;
}
