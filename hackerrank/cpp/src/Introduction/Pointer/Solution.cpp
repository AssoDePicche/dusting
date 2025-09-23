#include <iostream>

void update(int *a, int *b)
{
  const unsigned int temp = *a;

  *a += *b;

  *b = abs(temp - *b);
}

int main()
{
  int a, b, *a_pointer = &a, *b_pointer = &b;

  std::cin >> a >> b;

  update(a_pointer, b_pointer);

  std::cout << a << std::endl
            << b;

  return 0;
}
