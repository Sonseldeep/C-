#include <iostream>
using namespace std;

int Division(int a, int b)
{
  int x = a - b;

  if (x != 0)
  {
    return (a / x);
  }
  else
  {
    throw(x);
  }
}
int main()
{
  int a, b;
  cin >> a >> b;
  try
  {
    cout << Division(a, b) << endl;
  }
  catch (int i)
  {
    cout << "Error: attempted to divide by  " << i << endl;
  }
  cout << "END";

  return 0;
}