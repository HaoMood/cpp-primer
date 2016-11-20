/*
 * word_transform.cpp
 * C++ Primer Chap. 11 Ex. 11.33
 * Hao Zhang
 * 2016.11.20  Frist release
 */

#include <map>
using std::map;
#include <string>
using std::string;
#include <fstream>
using std::ifstream;
#include <stdexcept>
#include "word_transform.h"

map<string, string> build_map(const string &rule_file) {
  ifstream fin(rule_file);
  if (!fin) {
    throw std::runtime_error("Cannot open file " + rule_file); 
  }

  map<string, string> trans_map;
  
  string key;
  string value;
  while (fin >> key && getline(fin, value)) {
    trans_map[key] = value.substr(1);
  }
  return trans_map;
}


string transform(const string word, const map<string, string> &trans_map) {
  auto it = trans_map.find(word);
  if (it == trans_map.end()) {
    return word;
  }
  else {
    return it->second;
  }
}
