#include <iostream>
using namespace std;
void Test(int x)
try
{
  if (x == 0)
    throw(x);
  if (x == -1)
    throw('x');
  if (x == 1)
    throw(1.0);
}
catch (...)
{
  cout << "Caught an exceptition" << endl;
}

int main()
{

  Test(1);
  Test(0);
  Test(-1);
  cout << "END" << endl;
  return 0;
}