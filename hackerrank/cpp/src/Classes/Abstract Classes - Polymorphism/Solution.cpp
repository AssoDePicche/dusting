#include <iostream>

int main() {
  int n, capacity, i, key, value;

  std::string command;

  std::cin >> n >> capacity;

  LRUCache* cache = new LRUCache(capacity);

  for (i = 0; i < n; i++) {
    std::cin >>command;

    if (command == "get") {
      std::cin >> key;

      std::cout << cache->get(key) << "\n";
    } else {
      std::cin >> key >> value;

      cache->set(key, value);
    }
  }

  delete cache;

  return 0;
}
