#include <iostream>
using namespace std;
class Test
{

  int a, b, c;

public:
  void getData(int x, int y, int z)
  {
    this->a = x;
    this->b = y;
    this->c = z;
  }
  void Display(void)
  {

    cout << "a: " << a << endl
         << "b: " << b << endl
         << "c: " << c << endl;
  }

  void operator-();
};
void Test::operator-()
{
  a = -a;
  b = -b;
  c = -c;
}
int main()
{
  Test t1;
  t1.getData(10, -2, 9);
  t1.Display();

  -t1;
  cout << "- values" << endl;
  t1.Display();

  return 0;
}