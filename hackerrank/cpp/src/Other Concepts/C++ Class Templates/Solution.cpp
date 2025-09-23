#include <iostream>
#include "./AddElements.cpp"

int main() {
  int n, i;

  std::cin >> n;

  for (i = 0; i < n; i++) {
    std::string type;

    std::cin >> type;

    switch (type) {
      case "float":
        double element1, element2;

        std::cin >> element1 >> element2;

        AddElements<double> myFloat(element1);

        std::cout << myFloat.add(element2) << "\n";
        break;

      case "int":
        int element1, element2;

        std::cin >> element1 >> element2;

        AddElements<int> myInt(element1);

        std::cout << myInt.add(element2) << "\n";
        break;

      case "string":
        std::string element1, element2;

        std::cin >> element1 >> element2;

        AddElements<std::string> myString(element1);

        std::cout << myString.add(element2) << "\n";
        break;
    }
  }

  return 0;
}
