/*
 * Query_result.h
 * C++ Primer Chap. 12 Ex. 12.30
 * Hao Zhang
 * 2016.11.21  Frist release
 */

#include <vector>
using std::vector;
#include <string>
using std::string;
#include <map>
using std::map;
#include <set>
using std::set;
#include <memory>
using std::shared_ptr;
#include <fstream>
using std::ifstream;
#include <ostream>
using std::ostream;

class Query_result {
public:
  using line_no = vector<string>::size_type;

private:
  string _sought;
  shared_ptr<set<line_no>> _lines;
  shared_ptr<vector<string>> _file;

public:
  friend ostream &print(ostream &out, const Query_result &result);

  Query_result(const string sought, shared_ptr<set<line_no>> lines,
      shared_ptr<vector<string>> file);
}; 
