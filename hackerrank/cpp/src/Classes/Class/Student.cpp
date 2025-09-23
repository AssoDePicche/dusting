#include <iostream>
#include "./Student.h"

Student::Student(std::string first_name, std::string last_name, int age, int standard)
{
  _first_name = first_name;

  _last_name = last_name;

  _age = age;

  _standard = standard;
}

int Student::get_age()
{
  return _age;
}

std::string Student::get_first_name()
{
  return _first_name;
}

std::string Student::get_last_name()
{
  return _last_name;
}

std::string Student::get_full_name()
{
  return _last_name + ", " + _first_name;
}

int Student::get_standard()
{
  return _standard;
}

std::string Student::to_string()
{
  return std::to_string(_age) + "," + _first_name + "," + _last_name + "," + std::to_string(_standard);
}
