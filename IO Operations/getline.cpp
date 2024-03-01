#include <iostream>
using namespace std;
int main()
{

  char name[50];
  cout << "Enter your name: ";
  cin.getline(name, sizeof(name));
  cout << "Name: " << name << endl;
  // cin will not take any string after a white space;

  cout << "Again" << endl;
  cout << "Enter your name: ";
  cin >> name;
  cout << "Name: " << name << endl;

  return 0;
}