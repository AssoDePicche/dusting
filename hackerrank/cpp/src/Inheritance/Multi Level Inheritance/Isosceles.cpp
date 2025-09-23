#include <iostream>
#include "./Triangle.cpp"

class Isosceles : public Triangle {
  public:
    void isosceles() {
      std::cout << "I am an isosceles triangle\n";
    }
};
