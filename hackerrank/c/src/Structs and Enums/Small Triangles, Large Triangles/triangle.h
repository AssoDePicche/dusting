typedef struct
{
	double a, b, c;
} triangle;

void sort_by_area(triangle *triangles, unsigned int number_of_triangles);

double calculate_area(const triangle triangle);

double calculate_perimeter(const triangle triangle);
