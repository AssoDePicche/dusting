#include <malloc.h>
#include <stdio.h>

void reverse_list(int *list, int size)
{
  int temp, start = 0, end = size - 1;

  while (start < end)
  {
    temp = list[start];

    list[start] = list[end];

    list[end] = temp;

    start++;

    end--;
  }
}

void print_list(int *list, int size)
{
  for (int index = 0; index < size; index++)
  {
    printf("%d ", list[index]);
  }
}

int main()
{
  int size, *list, index;

  scanf("%d", &size);

  list = (int *)malloc(size * sizeof(int));

  for (index = 0; index < size; index++)
  {
    scanf("%d", &list[index]);
  }

  reverse_list(list, size);

  print_list(list, size);

  free(list);

  return 0;
}
