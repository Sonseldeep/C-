// syntax:
// friend dataType functionName(class object);
#include <iostream>
using namespace std;

class Sample
{

  int a, b;

public:
  void SetData()
  {

    a = 10;
    b = 20;
  }
  friend void mean(Sample s);
};
void mean(Sample s)
{

  float ans = (s.a + s.b) / 2.0;
  cout << "Mean of the two numbers is :" << ans << endl;
}
int main()
{
  Sample x;
  x.SetData();
  mean(x);

  return 0;
}