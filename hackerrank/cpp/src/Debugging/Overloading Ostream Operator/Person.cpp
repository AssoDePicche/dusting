class Person {
  private:
    std::string _first_name, _last_name;

  public:
    Person(const std::string& first_name, const std::string& last_name) {
      _first_name = first_name;

      _last_name = last_name;
    }

    const std::string& get_first_name() const {
      return _first_name;
    }
    
    const std::string& get_last_name() const {
      return _last_name;
    }
};

std::ostream &operator << (std::ostream& out, Person& p) {
  out << "first_name=" << p.get_first_name() << ",last_name=" << p.get_last_name();

  return out;
}
