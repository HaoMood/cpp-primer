/*
 * main.cpp 
 * C++ Primer Chap. 11 Ex. 11.33
 * Hao Zhang
 * 2016.11.20  Frist release
 */

#include <string>
using std::string;
#include <iostream>
using std::cout;
using std::cerr;
using std::endl;
#include <sstream>
using std::istringstream;
#include <fstream>
using std::ifstream;
#include "word_transform.h"

int main() {
  auto trans_map = build_map("data/rule.txt");

  ifstream fin("data/input.txt");
  if (!fin) {
    cerr << "Cannot open data/input.txt" << endl;
    return -1;
  }

  string line;
  while (getline(fin, line)) {
    istringstream sin(line);
 
    bool is_first_word = true;
    string word;
    while (sin >> word) {
      if (is_first_word) {
        is_first_word = false;
      }
      else {
        cout << " ";
      }
      cout << transform(word, trans_map);
    }
    cout << endl;
  }

  return 0;
}
