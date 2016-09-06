#include <iostream>
using std::cout;
using std::endl;

#include "swap.h"

int main()
{
    int a = 1; 
    int b = 2;
    swap(&a, &b);
    cout << "a = " << a << ", b = " << b << endl;
    return 0;
}
