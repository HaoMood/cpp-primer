/*
 * main.cpp
 * C++ Primer Chap. 11 Ex. 11.38
 * Hao Zhang
 * 2016.11.20  Frist release
 */

#include <unordered_map>
using std::unordered_map;
#include <string>
using std::string;
#include <cstddef>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  unordered_map<string, size_t> word2count;
  
  string word;
  while (cin >> word) {
    ++word2count[word];
  }
  
  for (const auto &item: word2count) {
    cout << item.first << " " << item.second << endl;
  }
  return 0;
}
