#include <stdio.h>

int min(int x, int y)
{
  return (x < y) ? x : y;
}

int main()
{
  int n, matrix_size, x, y, min_x, min_y;

  scanf("%d", &n);

  matrix_size = (2 * n) - 1;

  for (x = 1; x <= matrix_size; x++)
  {
    for (y = 1; y <= matrix_size; y++)
    {
      min_x = min(x - 1, (matrix_size - x));

      min_y = min(y - 1, (matrix_size - y));

      printf("%d ", n - min(min_x, min_y));
    }

    printf("\n");
  }

  return 0;
}
