#include <iostream>
using namespace std;
class Complex
{

  float a, b;

public:
  Complex()
  {
    a = 0;
    b = 0;
  }

  Complex(float x, float y)
  {
    a = x;
    b = y;
  }

  Complex operator+(Complex c);
  void Display(void);
};
Complex Complex ::operator+(Complex c)
{
  Complex temp;
  temp.a = a + c.a;
  temp.b = b + c.b;
  return temp;
}
void Complex::Display(void)
{
  cout << "(" << a << "+" << b << "i)" << endl;
}
int main()
{
  Complex C1, C2, C3;
  C1 = Complex(2.5, 3.5);
  C2 = Complex(1.6, 2.7);
  C3 = C1 + C2;
  C1.Display();
  C2.Display();
  C3.Display();

  return 0;
}