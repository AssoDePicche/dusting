#include <iostream>
#include "./Person.cpp"

class Professor : public Person {
  private:
    int publications;

    static int id;

  public:
    void getdata() {
      std::cin >> name >> age >> publications;
    }

    void putdata() {
      std::cout << name << " " << age << " " << publications << " " << id << "\n";

      id++;
    }
};
