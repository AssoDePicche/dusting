// 1346. Check If N and Its Double Exist

#include <stdbool.h>
#include <stddef.h>

bool checkIfExist(const int* buffer, const size_t bufferSize) {
  for (size_t i = 0; i < bufferSize - 1; ++i) {
    for (size_t j = i + 1; j < bufferSize; ++j) {
      if (buffer[i] == 2 * buffer[j] || 2 * buffer[i] == buffer[j]) {
        return true;
      }
    }
  }

  return false;
}
