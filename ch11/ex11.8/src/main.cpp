/*
 * Makefile
 * C++ Primer Chap. 13 Ex. 11.8
 * Hao Zhang
 * 2016.11.15  Frist release
 */

#include <cstddef>
#include <map>
using std::map;
#include <vector>
using std::vector;
#include <string>
using std::string;
#include <algorithm>
#include <cctype>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main() {
  map<string, size_t> word_count_map;
  vector<string> stop_words_vec = {"the", "but"};

  string word;
  while (cin >> word) {
    std::transform(word.begin(), word.end(), word.begin(), tolower);
    if (ispunct(word[word.size() - 1])) {
      word.erase(word.size() - 1, 1);
    }

    if (std::find(stop_words_vec.cbegin(), stop_words_vec.cend(), word)
        == stop_words_vec.cend()) {
      ++word_count_map[word];
    }
  }

  for (const auto &pair: word_count_map) {
    cout << pair.first << ": " << pair.second << endl;
  }
  return 0;
}
