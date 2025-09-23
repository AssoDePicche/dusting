#include <limits.h>
#include <stdarg.h>

int sum(const int count, ...) {
  va_list args;

  va_start(args, count);

  int sum = 0;

  for (int index = 0; index < count; ++index) {
    sum += va_arg(args, int);
  }

  va_end(args);

  return sum;
}

int min(const int count, ...) {
  va_list args;

  va_start(args, count);

  int min = INT_MAX;

  for (int index = 0; index < count; ++index) {
    const int arg = va_arg(args, int);

    if (min > arg) {
      min = arg;
    }
  }

  va_end(args);

  return min;
}

int max(const int count, ...) {
  va_list args;

  va_start(args, count);

  int max = INT_MIN;

  for (int index = 0; index < count; ++index) {
    const int arg = va_arg(args, int);

    if (max < arg) {
      max = arg;
    }
  }

  va_end(args);

  return max;
}
