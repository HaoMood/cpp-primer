/*
 * C++ Primer
 * Chap. 2. Ex. 2.18
 * Hao Zhang
 * 2016.08.20
 * ex2.18.cpp
 */

int main()
{
    int a = 1126;
    int b = 11;
    int *p = &a;
    *p = 6211;
    p = &b;
    return 0;
}
