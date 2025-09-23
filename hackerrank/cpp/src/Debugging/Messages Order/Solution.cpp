#include <iostream>
#include <vector>
#include "./Message.cpp"
#include "./MessageFactory.cpp"
#include "./Network.cpp"
#include "./Recipient.cpp"

int main() {
  MessageFactory factory;

  Recipient recipient;

  std::vector<Message> messages;

  std::string text;

  while (std::getline(std::cin, text)) {
    messages.push_back(factory.create(text));
  }

  Network::sendMessages(messages, recipient);

  recipient.printMessages();

  return 0;
}
