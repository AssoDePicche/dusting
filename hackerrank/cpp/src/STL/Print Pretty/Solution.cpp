#include <iostream>
#include <iomanip>

int main() {
  int T;

  std::cin >> T;

  std::cout << std::setiosflags(std::ios::uppercase);

  std::cout << std::setw(0xf) << std::internal;

  while (T--) {
    double A, B, C;

    std::cin >> A >> B >> C;

    std::cout << std::hex << std::left << std::showbase << std::nouppercase;

    std::cout << (long long) A << '\n';

    std::cout << std::dec << std::right << std::setw(15) << std::setfill('_') << std::showpos << std::fixed << std::setprecision(2);

    std::cout << B << '\n';

    std::cout << std::scientific << std::uppercase << std::noshowpos << std::setprecision(9);

    std::cout << C << '\n';
  }

  return 0;
}
