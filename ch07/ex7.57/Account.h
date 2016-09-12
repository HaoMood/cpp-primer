/*
 * C++ Primer
 * Chap. 7 Ex. 7.57
 * Hao Zhang
 * 2016.09.12
 * Account.h
 */

#ifndef ACCOUNT_H_
#define ACCOUNT_H_

#include <string>
using std::string;

#include <cstddef>

class Account
{
private:
    string _owner;
    double _amount;
    static double _interest_rate;
    static constexpr size_t _period = 30;
    double _daily_tbl[_period];

public:
    Account() = default;

    static double get_rate();
    static void set_rate(double rate);
    void calculate();

private:
    static double _init_rate();
};

inline void Account::calculate()
{
    _amount += _amount * _interest_rate;
}

inline double Account::get_rate()
{
    return _interest_rate;
}

inline void Account::set_rate(double rate)
{
    _interest_rate = rate;
}

inline double Account::_init_rate()
{
    return 0.0225;
}

#endif
