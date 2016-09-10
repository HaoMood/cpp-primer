/*
 * C++ Primer
 * Chap. 7 Ex. 7.23
 * Hao Zhang
 * 2016.09.08
 * Screen.h
 */

#ifndef SCREEN_H_
#define SCREEN_H_

#include <string>
using std::string;

#include <cstddef>

#include <ostream>
using std::ostream;

#include "Window_mgr.h"

class Screen
{
public:
    using pos = string::size_type;

private:
    pos _cursor = 0;
    pos _height = 0;
    pos _width = 0;
    string _contents;
    mutable size_t _access_ctr;

public:
    Screen() = default;
    Screen(pos height, pos width): Screen(height, width, ' ') {}
    Screen(pos height, pos width, char c):
        _height(height), _width(width), _contents(height * width, c) {}

    char get() const;
    char get(pos i, pos j) const;
    Screen &set(char c);
    Screen &set(pos i, pos j, char c);
    Screen &move(pos i, pos j);
    Screen &display(ostream &out);
    const Screen &display(ostream &out) const;
    void some_member() const;

private:
    void do_display(ostream &out) const;

    friend void Window_mgr::clear(screen_idx i);
};

inline char Screen::get() const
{
    return _contents[_cursor];
}

inline char Screen::get(pos i, pos j) const
{
    return _contents[i * _width + j];
}

inline Screen &Screen::set(char c)
{
    _contents[_cursor] = c;
    return *this;
}

inline Screen &Screen::set(pos i, pos j, char c)
{
    _contents[i * _width + j] = c;
    return *this;
}

inline Screen &Screen::move(pos i, pos j)
{
    _cursor = i * _width + j;
    return *this;
}

inline Screen &Screen::display(ostream &out)
{
    do_display(out);
    return *this;
}

inline const Screen &Screen::display(ostream &out) const
{
    do_display(out);
    return *this;
}

inline void Screen::some_member() const 
{
    ++_access_ctr;
}

inline void Screen::do_display(ostream &out) const
{
    out << _contents;
}

#endif
