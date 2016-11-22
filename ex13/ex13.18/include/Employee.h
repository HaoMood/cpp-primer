/*
 * Employee.h
 * C++ Primer Chap. 13 Ex. 13.18
 * Hao Zhang
 * 2016.11.22  Frist release
 */

#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_

#include <string>
using std::string;
#include <cstddef>

class Employee {
private:
  string _name;
  size_t _id = 0;

  static size_t id_count;

public:
  Employee() = default;
  Employee(const string name): _name(name), _id(++id_count) {}

  size_t id() const { return _id; }
};

size_t Employee::id_count = 0;

#endif  // EMPLOYEE_H_
