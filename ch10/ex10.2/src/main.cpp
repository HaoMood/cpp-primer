/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.2
 * Hao Zhang
 * 2016.11.10  Frist release
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <list>
using std::list;
#include <string>
using std::string;
#include <algorithm>

int main() {
  list<string> slist;
  string val;
  cout << "Please input a series of strings." << endl;
  while (cin >> val) {
    slist.push_back(val);
  }
  cin.clear();
  
  string sought;
  cout << "Please input a sought string: ";
  cin >> sought;
  auto count_val = std::count(slist.cbegin(), slist.cend(), sought);
  cout << count_val << endl;

  return 0;
}
