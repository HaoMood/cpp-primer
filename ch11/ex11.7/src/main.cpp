/*
 * main.cppMakefile
 * C++ Primer Chap. 10 Ex. 11.7
 * Hao Zhang
 * 2016.11.15  Frist release
 */

#include <map>
using std::map;
#include <vector>
using std::vector;
#include <string>
using std::string;

int main() {
  vector<string> children = {"A", "B", "C"};
  map<string, vector<string>> family2children = {{"Bill", children}};
  
  vector<string> children2 = {"D", "E", "F"};
  family2children["Tom"] = children2;

  family2children["Bill"].push_back("G");
  return 0;
}
