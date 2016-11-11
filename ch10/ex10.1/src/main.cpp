/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.1
 * Hao Zhang
 * 2016.11.10  Frist release
 */

#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <algorithm>

int main() {
  vector<int> ivec;
  int val;
  cout << "Please input a series of integers." << endl;
  while (cin >> val) {
    ivec.push_back(val);
  }
  cin.clear();
  
  int sought;
  cout << "Please input a sought integer: ";
  cin >> sought;
  auto count_val = std::count(ivec.cbegin(), ivec.cend(), sought);
  cout << count_val << endl;

  return 0;
}
