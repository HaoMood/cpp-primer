/*
 * Text_query.h
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

class Query_result;

class Text_query {
public:
  using line_no = vector<string>::size_type;

private:
  shared_ptr<vector<string>> _file;
  map<string, shared_ptr<set<line_no>>> _word_map;

public:
  Text_query(const string &file_path);

  Query_result query(const string &sought) const;
};
