#include <iostream>

int max_of_four(const int a, const int b, const int c, const int d)
{
  int max = 0, numbers[4] = {a, b, c, d};

  for (const int number : numbers)
  {
    if (max < number)
    {
      max = number;
    }
  }

  return max;
}

int main()
{
  int a, b, c, d;

  std::cin >> a >> b >> c >> d;

  std::cout << max_of_four(a, b, c, d) << std::endl;

  return 0;
}
