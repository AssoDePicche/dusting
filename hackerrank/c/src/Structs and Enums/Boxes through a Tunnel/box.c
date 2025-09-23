#include "box.h"

int get_volume(box box)
{
  return box.height * box.length * box.width;
}

int is_lower_than_max_height(box box)
{
  return box.height < MAX_HEIGHT;
}
