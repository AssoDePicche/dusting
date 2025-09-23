#include <map>
#include "./Color.cpp"
#include "./Fruit.cpp"

template <typename Type> struct Traits {
  static std::map<int, std::string> map;

  static std::string name(int index) {
    return map.count(index) ? map[index] : "unknown";
  }
};

template<>

std::map<int, std::string> Traits<Color>::map {
  {static_cast<int>(Color::red), "red"},
  {static_cast<int>(Color::green), "green"},
  {static_cast<int>(Color::orange), "orange"}
};

template<>

std::map<int, std::string> Traits<Fruit>::map {
  {static_cast<int>(Fruit::apple), "apple"},
  {static_cast<int>(Fruit::pear), "pear"},
  {static_cast<int>(Fruit::orange), "orange"}
};
