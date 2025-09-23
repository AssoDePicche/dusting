#include <iostream>
#include "./Complex.cpp"

int main() {
  Complex x, y, z;

  std::string s1, s2;

  std::cin >> s1 >> s2;

  x.input(s1);

  x.input(s2);

  z = x + y;

  std::cout << z << "\n";

  return 0;
}
