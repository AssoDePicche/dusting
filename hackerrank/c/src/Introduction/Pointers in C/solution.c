#include <stdio.h>
#include <stdlib.h>

void update(int *a, int *b)
{
  int temp = *a;

  *a = temp + *b;

  *b = abs(temp - *b);
}

int main()
{
  int a, b, *a_pointer = &a, *b_pointer = &b;

  scanf("%d %d", &a, &b);

  update(a_pointer, b_pointer);

  printf("%d\n%d", a, b);

  return 0;
}
