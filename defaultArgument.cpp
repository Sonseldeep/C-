#include <iostream>
using namespace std;
int add(int a, int b = 1, int c = 0)
{
  return (a + b + c);
}
int main()
{
  cout << "add: " << add(2) << endl;
  cout << "add: " << add(2, 4, 7) << endl;

  return 0;
}