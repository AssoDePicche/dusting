#include "box.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  unsigned int numberOfBoxes;

  scanf("%d", &numberOfBoxes);

  box *boxes = malloc(numberOfBoxes * sizeof(box));

  unsigned int index = 0;

  for (; index < numberOfBoxes; ++index)
  {
    scanf("%d %d %d", &boxes[index].length, &boxes[index].width, &boxes[index].height);
  }

  for (index = 0; index < numberOfBoxes; ++index)
  {
    if (is_lower_than_max_height(boxes[index]))
    {
      printf("%d\n", get_volume(boxes[index]));
    }
  }

  return 0;
}
