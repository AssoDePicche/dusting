#include <stdio.h>
#include <string.h>

typedef unsigned int uint;

#define MAX_LEN 1000

int main(void)
{
  const char digits[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

  char string[MAX_LEN];

  scanf("%[^\n]%*c", string);

  size_t length = strlen(string);

  for (uint digit = 0; digit < 10; ++digit)
  {
    uint frequency = 0;

    for (uint character = 0; character < length; ++character)
    {
      if (string[character] == digits[digit])
      {
        ++frequency;
      }
    }

    printf("%d ", frequency);
  }

  return 0;
}
