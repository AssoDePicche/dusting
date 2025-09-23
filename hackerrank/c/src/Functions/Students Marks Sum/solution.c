#include <malloc.h>
#include <stdio.h>

int is_boy(const char gender)
{
  return (gender == 'b');
}

int marks_summation(const int *marks, int number_of_students, char gender)
{
  int sum = 0, index = is_boy(gender) ? 0 : 1;

  while (index < number_of_students)
  {
    sum += marks[index];

    index += 2;
  }

  return sum;
}

int main(void)
{
  int number_of_students;

  char gender;

  scanf("%d", &number_of_students);

  int *marks = (int *)malloc(number_of_students * sizeof(int));

  for (int student = 0; student < number_of_students; ++student)
  {
    scanf("%d", (marks + student));
  }

  scanf("%c", &gender);

  printf("%d", marks_summation(marks, number_of_students, gender));

  free(marks);

  return 0;
}
