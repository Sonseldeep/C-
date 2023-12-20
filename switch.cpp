#include <iostream>
using namespace std;
int main()
// in case of switch  continue is not valid 
{
    // while passing integer
    /*
     int num;
    cout << "enter number" << endl;
    cin >> num;
    switch ((num)) // here we can pass integer or character
    {
    case 1:
        cout << "first" << endl;

        break;
    case 2:
        cout << "second" << endl;
        break;

    default:
        cout << "enter number either 1 or 2" << endl;
        break;
    }
    */

    // passing character;
    cout<<"----------------------------------"<<endl;
    cout<<"enter first letter of day"<<endl;
    char ch;
    cin >> ch;
    switch (ch)
    {
    case 's':
        cout << "sunday" << endl;
        break;
    case 'm':
        cout << "monday" << endl;
        break;
    case 't':
        cout << "tuesday" << endl;
        break;
   
    case 'w':
        cout << "wednesday" << endl;
        break;
    case 'T':
        cout << "thursday" << endl;
        break;
    case 'f':
        cout << "friday" << endl;
        break;
    case 'S':
        cout << "saturday" << endl;
        break;
    default:
        cout << "out of range" << endl;
       
    }
     return 0;
}