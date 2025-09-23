#include <malloc.h>
#include <string.h>
#include <stdio.h>

int main()
{
  char *string = (char *)malloc(1024 * sizeof(char));

  scanf("%[^\n]", string);

  string = realloc(string, strlen(string) + 1);

  for (int index = 0; index < strlen(string); index++)
  {
    if (string[index] == ' ')
    {
      printf("\n");

      continue;
    }

    printf("%c", string[index]);
  }

  return 0;
}
