/*
 * main.cppMakefile
 * C++ Primer Chap. 10 Ex. 11.14
 * Hao Zhang
 * 2016.11.15  Frist release
 */

#include <map>
using std::map;
#include <vector>
using std::vector;
#include <utility>
using std::pair;
#include <string>
using std::string;

int main() {
  vector<pair<string, string>> children = {
      {"A", "1 Jan"}, {"B", "1 Feb"}, {"C", "1 Mar"}};
  map<string, vector<pair<string, string>>> family2children 
      = {{"Bill", children}};
  
  vector<pair<string, string>> children2 = {
      {"D", "1 Aug"}, {"E", "1 Sep"}};
  family2children["Tom"] = children2;

  family2children["Bill"].push_back({"G", "1 Jul"});
  return 0;
}
