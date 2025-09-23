#include <iostream>
#include <vector>
#include "./StringParser.cpp"

int main()
{
  std::string string;

  std::cin >> string;

  std::vector<int> integers = StringParser::toIntegers(string);

  for (const int integer : integers)
  {
    std::cout << integer << std::endl;
  }

  return 0;
}
