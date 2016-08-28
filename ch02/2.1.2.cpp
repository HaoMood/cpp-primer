#include <iostream>

using std::cout;
using std::endl;

int main()
{
    bool b = 42;    // true
    int i = b;      // 1
    i = 3.14;       // 3
    double pi = i;  // 3.0
    unsigned char c = -1;   // 255
    signed char c2 = 256;   // undefined
    
    int i2 = -3.14;
    cout << (int)c2 << " " << i2 << endl;

    int i3 = 42;
    if (i3)  {   // true
        i = 0;
    }

    unsigned u = 10;    // unsigned int
    int i4 = -42;
    cout << i4 + i4 << endl;    // -84
    cout << u + i4 << endl;     // if 32-bit ints, prints 429496764

    unsigned u1 = 42, u2 = 10;
    cout << u1 - u2 << endl;
    cout << u2 - u1 << endl;

    // i can never be less than 0
    for (unsigned i = 10; i >= 0; --i)   {        
        cout << i << endl;
    }

    unsigned u5 = 11;
    while (u5 > 0)  {
        --u5;   // decrement first
        cout << u5 << endl;
    }

    return 0;
}
