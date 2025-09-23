#include "triangle.h"
#include <malloc.h>
#include <stdio.h>

int main(void)
{
  unsigned int number_of_triangles, index;

  scanf("%d", &number_of_triangles);

  triangle *triangles = malloc(number_of_triangles * sizeof(triangle));

  for (index = 0; index < number_of_triangles; ++index)
  {
    scanf("%d%d%d", &triangles[index].a, &triangles[index].b, &triangles[index].c);
  }

  sort_by_area(triangles, number_of_triangles);

  for (index = 0; index < number_of_triangles; ++index)
  {
    printf("%d %d %d\n", triangles[index].a, triangles[index].b, triangles[index].c);
  }

  return 0;
}
