/*
 * C++ Prime
 * Chap. 5 Ex. 5.25
 * Hao Zhang
 * 2016.08.29
 * ex5.25.cpp
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <stdexcept>

int main()
{
    int a = 0, b = 0;
    cout << "Input #a and #b" << endl;
    cin >> a >> b;
    
    while (true) {
        try {
            if (b == 0) {
                throw std::runtime_error("Divided by zero");
            }
            break;
        }
        catch (std::runtime_error err) {
            cout << err.what() << endl;
            cout << "Input a new variable for b" << endl;
            cin >> b;
        }
    }
    int ret = a / b;

    cout << ret << endl;
    return 0;
}
