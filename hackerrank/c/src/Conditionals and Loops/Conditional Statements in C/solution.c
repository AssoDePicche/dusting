#include <stdio.h>

int main()
{
  const char *table[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

  int number, in_table;

  scanf("%d", &number);

  in_table = (number > 0) && (number < 10);

  if (in_table) {
    printf("%s", table[number - 1]);
  } else if (number > 9)
  {
    printf("Greater than 9");
  }

  return 0;
}
