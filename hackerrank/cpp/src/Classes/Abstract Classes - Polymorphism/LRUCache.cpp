#include "./Cache.cpp"

class LRUCache : public Cache {
  public:
    LRUCache(int c) {
      capacity = c;
    }

    void set(int key, int value) {
      Node* node;

      if (map.empty()) {
        node = new Node(key, value);

        tail = head = node;

        map[key] = node;

        return;
      }

      auto iterator = map.find(key);

      if (iterator != map.end()) {
        iterator->second->value = value;

        if (head == iterator->second) {
          return;
        }

        iterator->second->prev->next = iterator->second->next;

        if (tail == iterator->second) {
          tail = tail->prev;
        } else {
          iterator->second->next->prev = iterator->second->prev;
        }

        iterator->second->next = head;

        iterator->second->prev = nullptr;

        head->prev = iterator->second;

        head = iterator->second;
      } else {
        node = new Node(head->prev, head, key, value);

        head->prev = node;

        head = node;

        map[key] = node;

        if (map.size() > capacity) {
          tail = tail->prev;

          map.erase(tail->next->key);

          delete tail->next;

          tail->next = nullptr;
        }
      }
    }

    int get(int key) {
      try {
        Node* target = map.at(key);

        return target->value;
      } catch (std::out_of_range exception) {
        return -1;
      }
    }
};
