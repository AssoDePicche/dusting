#include <iostream>
#include "./Professor.cpp"
#include "./Student.cpp"

int Professor::id = 1;

int Student::id = 1;

int main() {
  int n, val;

  std::cin >> n;

  Person *per[n];

  for (int i = 0; i < n; i++) {
    std::cin >> val;

    if (val == 1) {
      per[i] = new Professor;
    } else {
      per[i] = new Student;
    }

    per[i]->getdata();
  }

  for (int i = 0; i < n; i++) {
    per[i]->putdata();
  }

  return 0;
}
