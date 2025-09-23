#include "./BadLengthException.hpp"

BadLengthException::BadLengthException(int _length)
{
  length = _length;
}

int BadLengthException::what()
{
  return length;
}
