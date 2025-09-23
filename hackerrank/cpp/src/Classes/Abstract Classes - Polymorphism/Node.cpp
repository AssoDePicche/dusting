struct Node {
  Node* next;

  Node* prev;

  int key, value;

  Node(Node* p, Node* n, int k, int val) {
    prev = p;

    next = n;

    key = k;

    value = val;
  }

  Node(int k, int val) {
    prev = NULL;

    next = NULL;

    key = k;

    value = val;
  }
};
