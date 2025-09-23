#include <stdio.h>

int maximum_value;

void max(int *x, int y)
{
  if ((*x < y) && (y < maximum_value))
  {
    *x = y;
  }
}

int and(int x, int y)
{
  return x & y;
}

int or(int x, int y)
{
  return x | y;
}

int xor (int x, int y) {
  return x ^ y;
}

void calculate_the_maximum(int n)
{
  int max_and = 0, max_or = 0, max_xor = 0;

  for (int x = 1; x <= n; x++)
  {
    for (int y = x + 1; y <= n; y++)
    {
      max(&max_and, and(x, y));

      max(&max_or, or(x, y));

      max(&max_xor, xor(x, y));
    }
  }

  printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main()
{
  int n;

  scanf("%d %d", &n, &maximum_value);

  calculate_the_maximum(n);

  return 0;
}
