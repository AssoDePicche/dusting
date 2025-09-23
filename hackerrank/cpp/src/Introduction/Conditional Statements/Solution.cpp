#include <iostream>

int main()
{
  const std::string list[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

  int number;

  std::cin >> number;

  std::string message = (number > 9) ? "Greater than 9" : list[number - 1];

  std::cout << message << std::endl;

  return 0;
}
