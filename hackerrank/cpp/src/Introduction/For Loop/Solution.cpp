#include <iostream>

bool is_even(const int number)
{
  return number % 2 == 0;
}

int main()
{
  const std::string list[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

  int start, end;

  std::cin >> start >> end;

  while (start++ <= end)
  {
    bool in_list = (start > 0) && (start < 10);

    if (in_list)
    {
      std::cout << list[start - 1] << std::endl;
    }

    std::string message = is_even(start) ? "even" : "odd";

    std::cout << message << std::endl;
  }

  return 0;
}
