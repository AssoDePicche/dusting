class Message {
  private:
    int _id;

    std::string _text;

  public:
    Message(const int& id, const std::string& text) : _id(id), _text(text) {}

    const int& getId() const {
      return _id;
    }

    const std::string& getText() {
      return _text;
    }
};

bool operator < (const Message& message_a, const Message& message_b) {
  return message_a.getId() < message_b.getId();
}
