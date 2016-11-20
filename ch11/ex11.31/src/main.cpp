/*
 * Makefile
 * C++ Primer Chap. 11 Ex. 11.31
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

void print(multimap<string, string> &author2book) {
  auto range = author2book.equal_range("Bill");
  for (auto it = range.first; it != range.second; ++it) {
    cout << it->first << " " << it->second << endl;
  }
}

int main() {
  multimap<string, string> author2book = {
      {"Bill", "Book1"}, {"Bill", "Book2"}, {"Bill", "Book3"}};
  print(author2book);

  auto range = author2book.equal_range("Bill");
  author2book.erase(range.first, range.second);
  print(author2book);

  range = author2book.equal_range("No exist");
  author2book.erase(range.first, range.second);
  print(author2book);
  return 0;
}
