class BadLengthException
{
public:
  int length;

  BadLengthException(int _length);

  int what();
};
