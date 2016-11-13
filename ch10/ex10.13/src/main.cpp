/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.13
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

bool gt5(const string &s) {
  return s.size() >= 5;
}

int main() {
  vector<string> vec = {"abc", "asdasd", "asd", "asdawf", "qwqeb"};
  auto gt5_end = std::partition(vec.begin(), vec.end(), gt5);
  for (auto it = vec.begin(); it != gt5_end; ++it) {
    cout << *it << endl;
  }
  return 0;
}
