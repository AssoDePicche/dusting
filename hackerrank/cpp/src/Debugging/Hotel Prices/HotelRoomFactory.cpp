#include "./HotelApartment.cpp"
#include "./HotelRoom.cpp"

class HotelRoomFactory {
  public:
    static HotelRoom* create(std::string type, int bedrooms, int bathrooms) {
      if (type == "standard") {
        return new HotelRoom(bedrooms, bathrooms);
      }

      return new HotelApartment(bedrooms, bathrooms);
    }
};
