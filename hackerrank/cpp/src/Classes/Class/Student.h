#include <string>

class Student
{
private:
  int _age, _standard;

  std::string _first_name, _last_name;

public:
  Student(std::string first_name, std::string last_name, int age, int standard);

  int get_age();

  std::string get_first_name();

  std::string get_last_name();

  std::string get_full_name();

  int get_standard();

  std::string to_string();
};
