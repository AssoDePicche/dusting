#include <iostream>
#include <set>

int main() {
  int queries, input, number, i;

  std::set<int> set;

  std::cin >> queries;

  for (i = queries; i > 0; i--) {
    std::cin >> input >> number;

    switch (input) {
      case 1:
        set.insert(number);
        break;
      
      case 2:
        set.erase(number);
        break;
      
      case 3:
        if (set.find(number) == set.end()) {
          std::cout << "No\n";
          
          continue;
        }

        std::cout << "Yes\n";
        break;
    }
  }

  return 0;
}
