#include <stdio.h>

int main()
{
  char *table[9] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

  const char *message;

  int start, end, in_table, is_even;

  scanf("%d %d", &start, &end);

  while (start++ <= end)
  {
    in_table = (start > 0) && (start < 10);

    if (in_table)
    {
      printf("%s\n", table[start - 1]);

      continue;
    }

    is_even = (start % 2) == 0;

    message = is_even ? "even" : "odd";

    printf("%s\n", message);
  }

  return 0;
}
