/*
 * main.cpp
 * C++ Primer Chap. 7 Ex. 10.12
 * Hao Zhang
 * 2016.09.08  First release
 */

#include <vector>
using std::vector;
#include <algorithm>
#include <iostream>
using std::cout;
using std::endl;
#include "Sales_data.h"

bool compare_isbn(const Sales_data &item1, const Sales_data &item2) {
  return item1.isbn() < item2.isbn();
}

int main() {
  vector<Sales_data> vec = {Sales_data("123", 1, 10), 
    Sales_data("23", 3, 23), Sales_data("123", 2, 30), 
    Sales_data("321", 4, 12)};
  std::sort(vec.begin(), vec.end(), compare_isbn);
  for (const auto &val: vec) {
    print(cout, val);
    cout << endl;
  }
  return 0;
}
