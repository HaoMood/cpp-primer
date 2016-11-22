/*
 * Has_ptr.h
 * C++ Primer Chap. 13 Ex. 13.26
 * Hao Zhang 
 * 2016.11.22  Frist release
 */

#ifndef HAS_PTR_H_
#define HAS_PTR_H_

#include <string>
using std::string;
#include <memory>
using std::shared_ptr;

class Has_ptr {
private:
  string *_string_ptr;
  int _i;
public:
  friend void swap(Has_ptr &lhs, Has_ptr &rhs);

  Has_ptr();
  Has_ptr(const string &str);
  Has_ptr(const Has_ptr &rhs);
  Has_ptr &operator=(Has_ptr rhs);
  ~Has_ptr() { delete _string_ptr; }
};


inline Has_ptr::Has_ptr(): _string_ptr(new string()), _i(0) {}

inline Has_ptr::Has_ptr(const string &str): 
    _string_ptr(new string(str)), _i(0) {}

inline Has_ptr::Has_ptr(const Has_ptr &rhs): 
    _string_ptr(new string(*rhs._string_ptr)), _i(rhs._i) {}

inline Has_ptr &Has_ptr::operator=(Has_ptr rhs) {
  swap(*this, rhs);
  return *this;
}

void swap(Has_ptr &lhs, Has_ptr &rhs) {
  std::swap(lhs._string_ptr, rhs._string_ptr);
  std::swap(lhs._i, rhs._i);
}
#endif
