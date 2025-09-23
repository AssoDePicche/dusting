#include "./Message.cpp"

class MessageFactory {
  private:
    int id = 0;

  public:
    Message create(const std::string& text) {
      return {id++, text};
    }
};
