#include <iostream>
#include "./Isosceles.cpp"

class Equilateral : public Isosceles {
  public:
    void equilateral() {
      std::cout << "I am an equilateral triangle\n";
    }
};
