// C++ Primer
// Chap. 1. Ex. 1.5
// Hao Zhang
// 2016.08.17
// ex1.5.cpp

#include <iostream>

int main()
{
    std::cout << "Please enter two numbers:";
    std::cout << std::endl;

    int v1 = 0, v2 = 0;
    std::cin >> v1;
    std::cin >> v2;

    std::cout << "The sum of ";
    std::cout << v1;
    std::cout << " and ";
    std::cout << v2;
    std::cout << " is ";
    std::cout << v1 + v2;
    std::cout << std::endl;

    return 0;
}
