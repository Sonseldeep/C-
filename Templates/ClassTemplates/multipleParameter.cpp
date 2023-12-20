#include "bits/stdc++.h"
using namespace std;
template <typename T1, typename T2>
class Add
{
  T1 a;
  T2 b;

public:
  Add(T1 x, T2 y)
  {
    this->a = x;
    this->b = y;
  }

  void add()
  {
    cout << a + b << endl;
  }
};

int main()
{
  Add<int, float> obj1(90, 13.9);
  obj1.add();

  return 0;
}