#include <sstream>
#include "./StringParser.h"

std::vector<int> StringParser::toIntegers(std::string string)
{
  std::stringstream stream(string);

  std::vector<int> integers;

  char comma;

  int integer;

  while (stream >> integer)
  {
    integers.push_back(integer);

    stream >> comma;
  }

  return integers;
}
