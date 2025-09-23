#include <iostram>
#include "./Rectangle.cpp"

class RectangleArea : public Rectangle {
  public:
    void read_input() {
      std::cin >> width >> heigth;
    }

    void display() {
      std::cout << width * heigth << "\n";
    }
};
