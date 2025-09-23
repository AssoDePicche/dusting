#include <iostream>
#include "./Person.cpp"

int main() {
  std::string first_name, last_name, event;

  std::cin >> first_name >> last_name >> event;

  auto person = Person(first_name, last_name);

  std::cout << person << ' ' << event << "\n";

  return 0;
}
