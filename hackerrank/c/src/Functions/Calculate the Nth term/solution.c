#include <stdio.h>

int find_nth_term(int nth_term, int first_term, int second_term, int third_term)
{
  if (nth_term < 2)
  {
    return first_term;
  }

  int sum_of_terms = first_term + second_term + third_term;

  return find_nth_term((nth_term - 1), second_term, third_term, sum_of_terms);
}

int main(void)
{
  int nth_term, first_term, second_term, third_term;

  scanf("%d %d %d %d", &nth_term, &first_term, &second_term, &third_term);

  printf("%d", find_nth_term(nth_term, first_term, second_term, third_term));

  return 0;
}
