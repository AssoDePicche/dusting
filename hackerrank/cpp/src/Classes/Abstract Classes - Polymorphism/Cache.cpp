#include <map>
#include "./Node.cpp"

class Cache {
  protected:
    std::map<int, Node*> map;

    Node* tail;

    Node* head;

    int capacity;

    virtual void set(int, int) = 0;

    virtual int get(int) = 0;
};
