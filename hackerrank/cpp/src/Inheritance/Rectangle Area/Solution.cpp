#include <iostream>
#include "./Rectangle.cpp"
#include "./RectangleArea.cpp"

int main() {
  RectangleArea rectangleArea;

  rectangleArea.read_input();

  rectangleArea.Rectangle::display();

  rectangleArea.display();

  return 0;
}
