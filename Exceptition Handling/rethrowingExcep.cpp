#include <iostream>
using namespace std;
int Division(double x, double y)
{
  cout << "inside function" << endl;
  try
  {
    if (y == 0)
    {
      throw y;
    }
    else
    {
      return (x / y);
    }
  }
  catch (double)
  {
    cout << "Exceptition caught inside function" << endl;
    throw y;
  }
  cout << "end of function<<endl" << endl;
}
int main()
{
  cout << "inside main " << endl;
  try
  {
    Division(20, 0);
  }
  catch (double)
  {
    cout << "Caught in Main\n";
  }

  return 0;
}