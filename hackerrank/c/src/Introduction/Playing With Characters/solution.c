#include <stdio.h>

#define MAX_LEN 100

int main(void)
{
  char character, string[MAX_LEN], sentence[MAX_LEN];

  scanf("%c", &character);

  scanf("%s", string);

  scanf("\n");

  scanf("%[^\n]%*c", sentence);

  printf("%c\n%s\n%s\n", character, string, sentence);
  
  return 0;
}
