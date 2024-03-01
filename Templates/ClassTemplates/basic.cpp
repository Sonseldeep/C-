#include "bits/stdc++.h"
using namespace std;
template <typename T>
class Example
{
private:
  T a, b;

public:
  Example(T x, T y)
  {
    this->a = x;
    this->b = y;
  }

  void add()
  {
    cout << "addition : " << (a + b) << endl;
  }
};
int main()
{

  Example<int> obj1(100, 200);
  Example<float> obj2(10.5, 20.70);
  obj1.add();
  obj2.add();

  return 0;
}