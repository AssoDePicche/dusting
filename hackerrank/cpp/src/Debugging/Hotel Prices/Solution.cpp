#include <iostream>
#include <vector>
#include "./HotelRoom.cpp.cpp"
#include "./HotelRoomFactory.cpp"

int main() {
  std::string type;

  int n, i, bedrooms, bathrooms, profit = 0;

  std::cin >> n;


  for (i = 0; i < n; ++i) {
    std::cin >> type >> bedrooms >> bathrooms;

    HotelRoom* room = HotelRoomFactory::create(type, bedrooms, bathrooms);

    profit += room->getPrice();

    delete room;
  }

  std::cout << profit << "\n";

  return 0;
}
