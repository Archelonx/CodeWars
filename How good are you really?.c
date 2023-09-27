#include <stdbool.h>

bool
better_than_average (const int class_points[], int class_size,
		     int your_points)
{
  float class_total = 0;
  for (int i = 0; i < class_size; i++)
    {
      class_total += class_points[i];
    }
  float class_average = class_total / class_size;
  if (class_average < your_points)
    {
      return true;
    }
  return false;

}
