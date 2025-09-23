#include <iostream>

int main() {
  int n, q, size, value, column, index;

  std::vector<std::vector<int>> matrix;

  std::cin >> n >> q;

  for (int i = 0; i < n; i++) {
    std::vector<int> vector;

    std::cin >> size;

    for (int j = 0; j < size; j++) {
      std::cin >> value;

      vector.push_back(value);
    }

    matrix.push_back(vector);
  }

  for (int k = 0; k < q; k++) {
    std::cin >> column >> index;

    std::cout << matrix[column][index] << "\n";
  }

  return 0;
}
