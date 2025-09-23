#include <iostream>
#include "./Person.cpp"

class Student : public Person {
  private:
    int marks[6];

    static int id;

  public:
    void getdata() {
      std::cin >> name >> age >> marks[0] >> marks[1] >> marks[2] >> marks[3] >> marks[4] >> marks[5];
    }

    void putdata() {
      int sum = 0;

      for (int mark : marks) {
        sum += mark;
      }

      std::cout << name << " " << age << " " << sum << " " << id << "\n";

      id++;
    }
};
