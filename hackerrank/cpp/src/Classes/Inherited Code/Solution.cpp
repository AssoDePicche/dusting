#include "BadLengthException.hpp"
#include "checkUsername.hpp"
#include <iostream>
#include <string>

int main()
{
  int validations;

  bool is_valid;

  std::string username, validation_message;

  std::cin >> validations;

  while (validations-- != 0)
  {
    std::cin >> username;

    try
    {
      is_valid = checkUsername(username);

      validation_message = is_valid ? "Valid" : "Invalid";

      std::cout << validation_message << std::endl;
    }
    catch (BadLengthException exception)
    {
      std::cout << "Too short: " << exception.what() << std::endl;
    }
  }

  return 0;
}
