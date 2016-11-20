/*
 * word_transform.h
 * C++ Primer Chap. 11 Ex. 11.33
 * Hao Zhang
 * 2016.11.20  Frist release
 */

#ifndef WORD_TRANSFORM_H_
#define WORD_TRANSFORM_H_

#include <map>
using std::map;
#include <string>
using std::string;
#include <fstream>
using std::ifstream;

map<string, string> build_map(const string &rule_file);

string transform(const string word, const map<string, string> &trans_map);

#endif
