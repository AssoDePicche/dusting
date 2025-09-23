#include <iostream>
#include "./Student.cpp"

int main()
{
  int age, standard;

  std::string first_name, last_name;

  std::cin >> age >> first_name >> last_name >> standard;

  Student student(first_name, last_name, age, standard);

  std::cout << student.get_age() << std::endl;

  std::cout << student.get_last_name() << std::endl;

  std::cout << student.get_standard() << std::endl << std::endl;

  std::cout << student.to_string();

  return 0;
}
