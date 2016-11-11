/*
 * main.cpp
 * C++ Primer Chap. 10 Ex. 10.3
 * Hao Zhang
 * 2016.11.10  First release
 */

#include <iostream>
using std::cout;
using std::endl;
#include <vector>
using std::vector;
#include <numeric>

int main() {
  vector<int> ivec = {1, 2, 3, 4, 5};
  const auto sum = std::accumulate(ivec.cbegin(), ivec.cend(), 0);
  cout << "Accumulate sum is " << sum << endl;
}
