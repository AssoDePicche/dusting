#include <iostream>

template <typename Type>

class AddElements {
  Type _element;

  public:
    AddElements(Type element): _element (element) {}

    Type add (Type element) {
      return _element + element;
    }
};

template<>

class AddElements <std::string> {
  std::string _string;

  public:
    AddElements(std::string string) {
      _string = string;
    }

    std::string concatenate(std::string string) {
      return _string + string;
    }
};
