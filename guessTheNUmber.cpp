#include <iostream>
using namespace std;
int main()
{
    int key = 15;
    cout << "Guess the number range from 0 to 20" << endl;
    int guessNumber;
    cin >> guessNumber;

    if (guessNumber == key)
    {
        cout<<"Hurray!! you got it"<< endl;
    }
    else if (guessNumber > key && guessNumber < 18)
    {
        cout << "just greater than answer, try low !! " << endl;
    }
    else if (guessNumber < 10)
    {
        cout << "too small!!" << endl;
    }
    else if ( guessNumber <=10 && guessNumber<=14){
        cout<<"near try abit higher"<< endl;
    }
    else if (guessNumber > 18)
    {
        cout << "to high" << endl;
    }
    else
    {
        cout << "try again" << endl;
    }
    return 0;
}