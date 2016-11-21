/*
 * str_blob.h
 * C++ Primer Chap. 12 Ex. 12.2
 * Hao Zhang
 * 2016.11.20  Frist release
 */

#ifndef STR_BLOB_H_
#define STR_BLOB_H_

#include <vector>
using std::vector;
#include <string>
using std::string;
#include <initializer_list>
using std::initializer_list;
#include <memory>
using std::shared_ptr;
#include <stdexcept>

class Str_blob {
private:
  shared_ptr<vector<string>> _data;

public:
  using size_type = vector<string>::size_type;

  Str_blob();
  Str_blob(initializer_list<string> il);

  size_type size() const;
  bool empty() const;
  void push_back(const string &str);
  void pop_back();
  string &front();
  string &back();

private:
  void _check(size_type i, const string &msg) const;
};


Str_blob::Str_blob(): _data(std::make_shared<vector<string>>()) {}

Str_blob::Str_blob(initializer_list<string> il):
    _data(std::make_shared<vector<string>>(il)) {}

inline Str_blob::size_type Str_blob::size() const {
  return _data->size();
}

inline bool Str_blob::empty() const {
  return _data->empty();
}

inline void Str_blob::_check(size_type i, const string &msg) const {
  if (i >= _data->size()) {
    throw std::out_of_range(msg);
  }
}

inline void Str_blob::push_back(const string &str) {
  _data->push_back(str);
}

inline void Str_blob::pop_back() {
  _check(0, "pop_back on empty Str_blob.");
  _data->pop_back();
}

inline string &Str_blob::front() {
  _check(0, "front on empty Str_blob.");
  return _data->front();
}

inline string &Str_blob::back() {
  _check(0, "back on empty Str_blob.");
  return _data->back();
}
#endif
