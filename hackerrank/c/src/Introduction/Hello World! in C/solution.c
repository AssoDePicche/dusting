#include <stdio.h>

int main()
{
  char string[100];

  scanf("%[^\n]%*c", &string);

  printf("Hello, World!\n%s", string);

  return 0;
}
