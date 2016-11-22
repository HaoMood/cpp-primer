/*
 * Numbered.h
 * C++ Primer Chap. 13 Ex. 13.17 
 * Hao Zhang
 * 2016.11.22  Frist release
 */

#ifndef NUMBERED_H_
#define NUMBERED_H_

class Numbered {
public:
  int id = 0;
  
  Numbered() = default;
  Numbered(const Numbered &num): id(num.id + 1) {}
};

#endif // NUMBERED_H_
