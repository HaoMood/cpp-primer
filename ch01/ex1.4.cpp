// C++ Primer
// Chap. 1. Ex. 1.4
// Hao Zhang
// 2016.08.17
// ex1.4.cpp

#include <iostream>

int main()
{
    std::cout << "Please enter two numbers" << std::endl;

    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;

    std::cout << "The product of " << v1 << " and " << v2
        << " is " << v1 * v2 << std::endl;

    return 0;
}
