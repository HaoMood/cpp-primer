/*
 * main.cpp
 * C++ Primer Chap. 12 Ex. 12.23
 * Hao Zhang
 * 2016.11.21  Frist release
 */

#include <string>
using std::string;
#include <memory>
using std::unique_ptr;
#include <cstddef>
#include <iostream>
using std::cout;
using std::endl;

int main() {
  char p1[] = "abc";
  char p2[] = "def";
  unique_ptr<char []> p(new char[7]);
  size_t i = 0;
  for (char c: p1) {
    p[i++] = c;
    cout << c << endl;
  }
  for (char c: p2) {
    p[i++] = c;
  }
  p[i] = '\0';
  for (size_t pos = 0; pos != 7; ++pos) {
    cout << p[pos] << endl;
  }
  cout << endl;
  return 0; 
}
