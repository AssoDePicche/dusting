#include <malloc.h>
#include <stdio.h>

int main()
{
  int size, *array, index, sum = 0;

  scanf("%d", &size);

  array = (int *)malloc(size * sizeof(int));

  for (index = 0; index < size; index++)
  {
    scanf("%d", &array[index]);

    sum += array[index];
  }

  free(array);

  printf("%d", sum);

  return 0;
}
