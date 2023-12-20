#include <iostream>
using namespace std;

int area(int l)
{
  return (l * l);
}
int area(int l, int b)
{
  return (l * b);
}
double area(double radius)
{
  return (3.14 * radius * radius);
}
int main()
{
  cout << area(9) << endl;
  cout << area(2, 6) << endl;
  cout << area(3.9) << endl;

  return 0;
}