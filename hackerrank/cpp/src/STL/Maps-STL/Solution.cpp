#include <iostream>
#include <map>

int main() {
  int queries, input, mark, i;

  std::map<std::string, int> map;

  std::string student;

  std::cin >> queries;

  for (i = queries; i > 0; i--) {
    std::cin >> input >> student;

    switch (input) {
      case 1:
        std::cin >> mark;

        if (map.find(student) != map.end()) {
          map[student] += mark;

          continue;
        }

        map.insert({student, mark});
        break;
    
      case 2:
        map.erase(student);
        break;

      case 3:
        std::cout << map[student] << '\n';
        break;
    }
  }

  return 0;
}
