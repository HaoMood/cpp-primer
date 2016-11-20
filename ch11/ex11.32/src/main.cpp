/*
 * Makefile
 * C++ Primer Chap. 11 Ex. 11.32
 * Hao Zhang
 * 2016.11.20  Frist release
 */

#include <map>
using std::map;
using std::multimap;
#include <set>
using std::set;
#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::endl;

int main() {
  multimap<string, string> author2book_multimap = {
      {"Bill", "Book2"}, {"Alan", "Book3"}, {"Bill", "Book1"},
      {"Bill", "Book3"}, {"Alan", "Book2"}, {"Alan", "Book1"},};

  map<string, set<string>> author2book_map;
  for (const auto &item: author2book_multimap) {
    author2book_map[item.first].insert(item.second);
  }
  for (const auto &item: author2book_map) {
    for (const auto &book_item: item.second) {
      cout << item.first << " " << book_item << endl; 
    }
  }
  return 0;
}
