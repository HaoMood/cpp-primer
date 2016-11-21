/*
 * Query_result.cpp
 * C++ Primer Chap. 12 Ex. 12.30
 * Hao Zhang
 * 2016.11.21  Frist release
 */

#include <ostream>
using std::endl;
#include "Query_result.h"

ostream &print(ostream &out, const Query_result &result) {
  out << result._sought << " occurs " << result._lines->size() << " times." 
      << endl;
  for (auto num: *result._lines) {
    out << "\t(line " << num + 1 << ") "
        << *(result._file->begin() + num) << endl;
  }
  return out;
}


Query_result::Query_result(const string sought, 
    shared_ptr<set<line_no>> lines, shared_ptr<vector<string>> file):
    _sought(sought), _lines(lines), _file(file) {}
