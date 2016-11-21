/*
 * main.cpp
 * C++ Primer Chap. 12 Ex. 12.7
 * Hao Zhang
 * 2016.11.20  Frist release
 */

#include <vector>
using std::vector;
#include <memory>
using std::shared_ptr;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

shared_ptr<vector<int>> create() {
  auto vec_p = std::make_shared<vector<int>>();
  return vec_p;
}

void read(shared_ptr<vector<int>> vec_p) {
  int val;
  while (cin >> val) {
    vec_p->push_back(val);
  }
}

void print(shared_ptr<vector<int>> vec_p) {
  for (auto it = vec_p->cbegin(); it != vec_p->cend(); ++it) {
    cout << *it << " ";
  }
  cout << endl;
}

int main() {
  auto vec_p = create();
  read(vec_p);
  print(vec_p);
  return 0;
}
