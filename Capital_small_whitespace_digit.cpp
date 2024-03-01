#include <iostream>
using namespace std;
int main()
{
  char ch;
  cout << "\nEnter a character: ";
  cin >> ch;

  if (ch >= 'A' && ch <= 'Z')
  {

    cout << "\nCapital Letter\n";
  }
  else if (ch >= 'a' && ch <= 'z')
  {
    cout << "\nSmall Letter\n";
  }
  else if (ch == ' ')
  {
    cout << "\nwhitespace\n";
  }
  else
  {
    cout << "\nDigit\n";
  }

  return 0;
}