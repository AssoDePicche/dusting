#include <algorithm>
#include <vector>
#include "./Message.cpp"
#include "./Recipient.cpp"

class Network {
  public:
    static void sendMessages(std::vector<Message> messages, Recipient& recipient) {
      std::random_shuffle(messages.begin(), messages.end());

      for (Message message : messages) {
        recipient.receive(message);
      }
    }
};
