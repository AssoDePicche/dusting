#include <iostream>
#include "./Student.cpp"

int main() {
  int inputs, kristenScore, count = 0, total;

  std::cin >> inputs;

  Student *students = new Student[inputs];

  for (int i = 0; i < inputs; i++) {
    students[i].input();
  }

  kristenScore = students[0].calculateTotalScore();

  for (int j = 1; j < inputs; j++) {
    total = students[j].calculateTotalScore();

    if (total > kristenScore) {
      count++;
    }
  }
  
  delete [] students;
  
  std::cout << count;

  return 0;
}
