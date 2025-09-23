#include "./BadLengthException.hpp"

#define MIN_USERNAME_LENGTH 5

bool checkUsername(std::string username)
{
  bool is_valid = true, invalid_username;

  int username_length = username.length();

  if (username_length < MIN_USERNAME_LENGTH)
  {
    throw BadLengthException(username_length);
  }

  for (int index = 0; index < username_length - 1; index++)
  {
    invalid_username = username[index] == 'w' && username[index + 1] == 'w';

    if (invalid_username)
    {
      is_valid = false;
    }
  }

  return is_valid;
}
