#include <bits/stdc++.h>
using namespace std;
int main()
{

  int a, b;
  cout << "Enter the value of 'a' and 'b':";
  cin >> a >> b;
  int result;
  char c;
  cout << "enter the mathematical operation: ";
  cin >> c;
  switch (c)
  {
  case '+':
    result = a + b;
    cout << "sum: " << result << endl;
    break;

  case '-':
    result = a - b;
    cout << "sub: " << result << endl;
    break;

  case '*':
    result = a * b;
    cout << "sum: " << result << endl;
    break;

  default:
    cout << "Invalid Operator!" << endl;
  }

  return 0;
}