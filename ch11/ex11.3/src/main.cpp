/*
 * Makefile
 * C++ Primer Chap. 13 Ex. 11.3
 * Hao Zhang
 * 2016.11.14  Frist release
 */

#include <cstddef>
#include <map>
using std::map;
#include <set>
using std::set;
#include <string>
using std::string;
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  map<string, size_t> word_count_map;
  set<string> stop_words_set = {"The", "But", "the", "but"};

  string word;
  while (cin >> word) {
    if (stop_words_set.find(word) == stop_words_set.end()) {
      ++word_count_map[word];
    }
  }

  for (const auto &pair: word_count_map) {
    cout << pair.first << ": " << pair.second << endl;
  }
  return 0;
}
