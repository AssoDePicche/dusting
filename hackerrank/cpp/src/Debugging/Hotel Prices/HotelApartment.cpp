#include "./HotelRoom.cpp"

class HotelApartment : public HotelRoom {
  private:
    const int PRICE_INCREASE = 100;

  public:
    HotelApartment(int bedrooms, int bathrooms) : HotelRoom(bedrooms + 2, bathrooms) {
    }

    int getPrice() {
      return HotelRoom::getPrice() + PRICE_INCREASE;
    }
};
