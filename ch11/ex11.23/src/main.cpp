/*
 * main.cppMakefile
 * C++ Primer Chap. 11 Ex. 11.23
 * Hao Zhang
 * 2016.11.20  Frist release
 */

#include <map>
using std::multimap;
#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;

int main() {
  multimap<string, string> family2children;
  family2children.insert({"Bill", "child-A"});
  family2children.insert({"Bill", "child-B"});
  family2children.insert({"Bill", "child-C"});
  for (const auto &item: family2children) {
    cout << item.first << " " << item.second << endl;
  }
  return 0;
}
