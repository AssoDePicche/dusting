#include <stdio.h>

int main()
{
  int number, counter = 0, digits = 5, sum_of_digits = 0;
  
  scanf("%d", &number);
  
  while (counter++ < digits)
  {
    sum_of_digits += number % 10;
    
    number /= 10;
  }
  
  printf("%d", sum_of_digits);
  
  return 0;
}
