#include <iostream>
using namespace std;
int main()
{
  // count the character of input text by user
  int count = 0;

  char c;
  cout << "Enter a string: ";
  cin.get(c);
  while (c != '\n')
  {
    count++;
    cin.get(c);
  }
  cout << "No of character: " << count << endl;
  return 0;
}