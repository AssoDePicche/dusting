#include <algorithm>
#include <vector>
#include "./Message.cpp"

class Recipient {
  private:
    std::vector<Message> messages;

    void fixOrder() {
      std::sort(messages.begin(), messages.end());
    }

  public:
    Recipient() {
    }

    void receive(const Message& message) {
      messages.push_back(message);
    }

    void printMessages() {
      fixOrder();

      for (Message& message : messages) {
        std::cout << message.getText() << "\n";
      }

      messages.clear();
    }
};
