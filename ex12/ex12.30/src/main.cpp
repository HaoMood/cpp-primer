/*
 * main.cpp
 * C++ Primer Chap. 12 Ex. 12.30
 * Hao Zhang
 * 2016.11.21  Frist release
 */

#include <string>
using std::string;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include "Text_query.h"
#include "Query_result.h"

int main() {
  const string input_file = "data/input.txt";
  Text_query text_query(input_file);

  while (true) {
    cout << "Enter a word to look for: ";
    string sought;
    if (!(cin >> sought)) {
      return 0;
    }
    print(cout, text_query.query(sought)) << endl;
  }
}
