#include "triangle.h"
#include <malloc.h>
#include <math.h>

double calculate_perimeter(const triangle triangle)
{
  return (triangle.a + triangle.b + triangle.c);
}

double calculate_area(const triangle triangle)
{
  const double half_perimeter = calculate_perimeter(triangle) / 2.0;

  return sqrt(half_perimeter * (half_perimeter - triangle.a) * (half_perimeter - triangle.b) * (half_perimeter - triangle.c));
}

void sort_by_area(triangle *triangles, unsigned int number_of_triangles)
{
  double *triangles_areas = malloc(number_of_triangles * sizeof(double));

  for (unsigned short int index = 0; index < number_of_triangles; ++index)
  {
    triangles_areas[index] = calculate_area(triangles[index]);
  }

  for (unsigned short int i = 0; i < number_of_triangles; ++i)
  {
    for (unsigned short int j = i + 1; j < number_of_triangles; ++j)
    {
      if (triangles_areas[i] > triangles_areas[j])
      {
        triangle greater = triangles[i];

        triangles[i] = triangles[j];

        triangles[j] = greater;

        double temp = triangles_areas[i];

        triangles_areas[i] = triangles_areas[j];

        triangles_areas[j] = temp;
      }
    }
  }
}
