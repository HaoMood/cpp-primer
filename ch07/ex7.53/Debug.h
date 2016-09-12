/*
 * C++ Primer
 * Chap. 7 Ex. 7.53
 * Hao Zhang
 * 2016.09.12
 * Debug.h
 */

#ifndef DEBUG_H_
#define DEBUG_H_

class Debug
{
private:
    bool _hw;
    bool _io;
    bool _other;

public:
    constexpr Debug(bool b = true): _hw(b), _io(b), _other(b) {}
    constexpr Debug(bool hw, bool io, bool other):
        _hw(hw), _io(io), _other(other) {}

    constexpr bool any();
    void set_io(bool b);
    void set_hw(bool b);
    void set_other(bool b);
};

constexpr inline bool Debug::any()
{
    return _hw || _io || _other;
}

inline void Debug::set_io(bool b)
{
    _io = b;
}

inline void Debug::set_hw(bool b)
{
    _hw = b;
}

inline void Debug::set_other(bool b)
{
    _other = b;
}
#endif
