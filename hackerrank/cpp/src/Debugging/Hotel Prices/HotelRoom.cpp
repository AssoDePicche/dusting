class HotelRoom {
  private:
    const int BEDROOM_PRICE = 50, BATHROOM_PRICE = 100;

    int _bedrooms, _bathrooms;

  public:
    HotelRoom(int bedrooms, int bathrooms) {
      _bedrooms = bedrooms;

      _bathrooms = bathrooms;
    }

    int getPrice() {
      return (BEDROOM_PRICE * _bedrooms) + (BATHROOM_PRICE * _bathrooms);
    }
};
