#include <bits/stdc++.h>
using namespace std;
int main()
{
  int result = 20;
  int userAnswer;

  cout << "-----------------------------------------" << endl;
  cout << "          WELCOME TO GUESSING GAME                   " << endl;
  cout << "-----------------------------------------" << endl;

  while (userAnswer != result)
  {
    cout << "enter the value range from 0 to 100: ";
    cin >> userAnswer;
    if (userAnswer == 50)
    {
      cout << "Smaller than 50" << endl;
    }
    else if (userAnswer > 50)
    {
      cout << "too big" << endl;
    }
    else if (userAnswer > 10)
    {
      cout << "too big" << endl;
    }
    else if (userAnswer == 25)
    {
      cout << "just smallar tan 25" << endl;
    }
    else if (userAnswer == 15)
    {
      cout << "greater than 15 :)" << endl;
    }
  }

  cout << "you won" << endl;

  return 0;
}