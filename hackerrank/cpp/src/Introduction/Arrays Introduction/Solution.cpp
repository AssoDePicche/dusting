#include <iostream>

int main()
{
  int arraySize, index;

  std::cin >> arraySize;

  int array[arraySize];

  for (index = 0; index < arraySize; index++)
  {
    std::cin >> array[index];
  }

  while (--arraySize >= 0)
  {
    std::cout << array[arraySize] << " ";
  }

  return 0;
}
