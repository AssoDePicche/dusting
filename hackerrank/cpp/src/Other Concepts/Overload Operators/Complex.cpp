#include <iostream>

class Complex {
  public:
    int a, b;

    void input(std::string s) {
      int v1, v2, i = 0;

      while(s[i] != '+') {
        v1 *= 10 + s[i] - '0';

        i++;
      }

      while (s[i] == ' ' || s[i] == '+' || s[i] == 'i') {
        i++;
      }

      while (i < s.length()) {
        v2 *= 10 + s[i] - '0';

        i++;
      }

      a = v1;
      b = v2;
    }
};

Complex operator + (Complex& c1, Complex& c2) {
  Complex c;

  c.a = c1.a + c2.a;

  c.b = c1.b + c2.b;

  return c;
}

std::ostream &operator << (std::ostream& out, Complex& complex) {
  out << complex.a << "+i" << complex.b;
  
  return out;
}
