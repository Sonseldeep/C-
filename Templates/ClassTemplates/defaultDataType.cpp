#include <bits/stdc++.h>
using namespace std;
template <typename T1 = int, typename T2 = int>
class DefaultType
{
  T1 a;
  T2 b;

public:
  DefaultType(T1 x, T2 y)
  {
    this->a = x;
    this->b = y;
  }

  void Display()
  {
    cout << " Add: " << (a + b) << endl;
  }
};

int main()
{
  DefaultType<> obj1(90.5, 67);
  DefaultType<float, int> obj2(90.5, 67);
  obj1.Display();
  obj2.Display();

  return 0;
}