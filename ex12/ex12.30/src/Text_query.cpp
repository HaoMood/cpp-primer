/*
 * Text_query.cpp
 * C++ Primer Chap. 12 Ex. 12.30
 * Hao Zhang
 * 2016.11.21  Frist release
 */

#include <stdexcept>
#include <sstream>
using std::istringstream;
#include "Text_query.h"
#include "Query_result.h"

Text_query::Text_query(const string &file_path): _file(), _word_map() {
  ifstream fin(file_path);
  if (!fin) {
    throw std::runtime_error("Error when open file " + file_path);
  }

  string line;
  while (getline(fin, line)) {
    _file->push_back(line);
    int n = _file->size() - 1;  // Current line number, start with 0.
    
    istringstream sin(line);
    string word;
    while (sin >> word) {
      auto &lines_ptr = _word_map[word];
      if (!lines_ptr) { 
        // If the ptr is null, i.e., the first time we see the word.
        lines_ptr.reset(new set<line_no>);
      }
      lines_ptr->insert(n);
    }
  }
}

Query_result Text_query::query(const string &sought) const {
  static shared_ptr<set<line_no>> no_found(new set<line_no>);

  auto pos = _word_map.find(sought);
  if (pos == _word_map.end()) {
    return Query_result(sought, no_found, _file);
  }
  else {
    return Query_result(sought, pos->second, _file); 
  }
}
