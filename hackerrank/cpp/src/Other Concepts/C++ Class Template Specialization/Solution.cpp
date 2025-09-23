#include <iostream>

int main() {
  int t = 0, i, j;

  std::cin >> t;

  while (t-- != 0) {
    std::cin >> i >> j;

    std::cout << Traits<Color>::name(i) << ' ';

    std::cout << Traits<Fruit>::name(j) << "\n";
  }
}
