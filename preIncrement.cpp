#include <iostream>
using namespace std;
int main()
{
    int i = 9;
    int a = ++i;
    // pre increment; fisrt increase the vale then only use it
    //  a = value of i++
    //  i=> increase by +1
    cout << "a : " << a << endl;
    cout << " i :" << i << endl;

    return 0;
}