/*
 * C++ Primer
 * Chap. 7 Ex. 7.23
 * Hao Zhang
 * 2016.09.10
 * Window_mgr.h
 */

#ifndef WINDOW_MGR_H_
#define WINDOW_MGR_H_

#include <vector>
using std::vector;

#include <string>
using std::string;

class Screen;

class Window_mgr
{
public:
    using screen_idx = vector<Screen>::size_type;

private:
//    vector<Screen> _vec_screen{Screen(24, 80, ' ')};
    vector<Screen> _vec_screen;

public:
    void clear(screen_idx i);
};
#endif
