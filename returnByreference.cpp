#include <iostream>
using namespace std;
int &max(int &a, int &b)
{
  if (a > b)
    return a;
  else
    return b;
}
int main()
{
  cout << "Max is:" << max(1, -2) << endl;

  return 0;
}