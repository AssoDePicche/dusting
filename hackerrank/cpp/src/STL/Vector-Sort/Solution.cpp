#include <algorithm>
#include <iostream>
#include <vector>

int main() {
  int integers, input;

  std::vector<int> vector;

  std::cin >> integers;

  while (integers > 0) {
    std::cin >> input;

    vector.push_back(input);

    integers--;
  }

  std::sort(vector.begin(), vector.end());

  for (int element : vector) {
    std::cout << element << ' ';
  }

  return 0;
}
