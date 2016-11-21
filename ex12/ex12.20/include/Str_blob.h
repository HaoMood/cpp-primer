/*
 * str_blob.h
 * C++ Primer Chap. 12 Ex. 12.20
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
using std::weak_ptr;
#include <cstddef>
#include <stdexcept>

class Str_blob_ptr;

// class Str_blob 
class Str_blob {
private:
  shared_ptr<vector<string>> _data;

public:
  using size_type = vector<string>::size_type;
  friend class Str_blob_ptr;

  Str_blob();
  Str_blob(initializer_list<string> il);

  size_type size() const;
  bool empty() const;
  void push_back(const string &str);
  void pop_back();
  string &front();
  string &back();
  Str_blob_ptr begin();
  Str_blob_ptr end();

private:
  void _check(size_type i, const string &msg) const;
};


// class Str_blob_ptr 
class Str_blob_ptr {
private:
  weak_ptr<vector<string>> _wptr;
  size_t _curr;

public:
  Str_blob_ptr();
  Str_blob_ptr(Str_blob &blob, size_t size = 0);

  string &deref() const;
  Str_blob_ptr& incr();
  bool operator!=(const Str_blob_ptr &p); 

private:
  shared_ptr<vector<string>> _check(size_t i, const string &msg) const;
};

// class Str_blob 
inline Str_blob::Str_blob(): _data(std::make_shared<vector<string>>()) {}

inline Str_blob::Str_blob(initializer_list<string> il):
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

inline Str_blob_ptr Str_blob::begin() {
  return Str_blob_ptr(*this);
}

inline Str_blob_ptr Str_blob::end() {
  return Str_blob_ptr(*this, _data->size());
}


// class Str_blob_ptr
inline Str_blob_ptr::Str_blob_ptr(): _wptr(), _curr(0) {}

inline Str_blob_ptr::Str_blob_ptr(Str_blob &blob, size_t size): 
    _wptr(blob._data), _curr(size) {}

inline shared_ptr<vector<string>> Str_blob_ptr::_check(
    size_t i, const string &msg) const {
  auto p = _wptr.lock();
  if (!p) {
    throw std::runtime_error("unbound Str_blob_ptr");
  }
  if (i >= p->size()) {
    throw std::out_of_range(msg);
  }
  return p;
}

inline string& Str_blob_ptr::deref() const {
  auto p = _check(_curr, "Deref past end.");
  return (*p)[_curr];
}

inline Str_blob_ptr &Str_blob_ptr::incr() {
  _check(_curr, "Increment past end.");
  ++_curr;
  return *this;
}

bool operator!=(const Str_blob_ptr &p); { 
  return p._curr != _curr; 
}
#endif
