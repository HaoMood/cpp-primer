/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.28
 * Hao Zhang
 * 2016.11.13  First release
 */

#include <vector>
using std::vector;
#include <list>
using std::list;
#include <algorithm>
#include <iterator>
#include <iostream>
using std::cout;
using std::endl;

void print_list(list<int> &list) {
  std::for_each(list.cbegin(), list.cend(), 
      [] (const int val) { cout << val << " "; });
  cout << endl;
}

int main() {
  vector<int> vec_from;
  for (int i = 1; i != 10; ++i) {
    vec_from.push_back(i);
  }

  list<int> list_inserter; 
  std::copy(vec_from.cbegin(), vec_from.cend(), 
      std::inserter(list_inserter, list_inserter.end()));
  print_list(list_inserter);

  list<int> list_back_inserter; 
  std::copy(vec_from.cbegin(), vec_from.cend(), 
      std::back_inserter(list_back_inserter)); 
  print_list(list_back_inserter);

  list<int> list_front_inserter; 
  std::copy(vec_from.cbegin(), vec_from.cend(), 
      std::front_inserter(list_front_inserter));
  print_list(list_front_inserter);
  return 0;
}
