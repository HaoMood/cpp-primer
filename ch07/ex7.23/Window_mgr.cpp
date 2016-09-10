/*
 * C++ Primer
 * Chap. 7 Ex. 7.23
 * Hao Zhang
 * 2016.09.10
 * Window_mgr.cpp
 */

#include "Screen.h"
#include "Window_mgr.h"

void Window_mgr::clear(screen_idx i)
{
    Screen &screen = _vec_screen[i];
    screen._contents = string(screen._height * screen._width, ' ');
}
