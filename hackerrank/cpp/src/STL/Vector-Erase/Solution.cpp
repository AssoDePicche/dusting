#include <iostream>
#include <vector>

int main() {
  std::vector<int> vector;

  int input, integer, a, b, c;

  std::cin >> input;

  while (input > 0) {
    std::cin >> integer;

    vector.push_back(integer);

    input--;
  }

  std::cin >> a;

  vector.erase(vector.begin() + a - 1);

  std::cin >> b >> c;

  vector.erase(vector.begin() + b - 1, vector.begin() + c - 1);

  std::cout << vector.size() << "\n";

  for (int element : vector) {
    std::cout << element << ' ';
  }

  return 0;
}
