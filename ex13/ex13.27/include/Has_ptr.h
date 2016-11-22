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
#include <cstddef>
#include <memory>
using std::shared_ptr;

class Has_ptr {
private:
  string *_string_ptr;
  int _i;
  size_t *_ref_count;
public:
  Has_ptr();
  Has_ptr(const string &str);
  Has_ptr(const Has_ptr &has);
  Has_ptr &operator=(const Has_ptr &has);
  ~Has_ptr(); 
};


inline Has_ptr::Has_ptr(): 
    _string_ptr(new string()), _i(0), _ref_count(new size_t(1)) {}

inline Has_ptr::Has_ptr(const string &str): 
    _string_ptr(new string(str)), _i(0), _ref_count(new size_t(1)) {}

inline Has_ptr::Has_ptr(const Has_ptr &has): 
    _string_ptr(has._string_ptr), _i(has._i), _ref_count(has._ref_count) {
  ++*_ref_count;
}

inline Has_ptr &Has_ptr::operator=(const Has_ptr &has) {
  ++*has._ref_count;
  if (--*_ref_count) {
    delete _string_ptr; 
    delete _ref_count;
  }
  _string_ptr = has._string_ptr;
  _i = has._i;
  _ref_count = has._ref_count;
  return *this;
}

Has_ptr::~Has_ptr() { 
  --*_ref_count;
  if (*_ref_count == 0) {
    delete _string_ptr; 
    delete _ref_count;
  }
}
#endif
