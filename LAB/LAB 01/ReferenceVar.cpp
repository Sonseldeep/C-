#include <iostream>
using namespace std;
int main()
{
    int m = 8;
    int &n = m;
    cout << "M :" << m << "\nN :" << n << endl;
    n++;
    cout << "------------------------" << endl;
    cout << "M :" << m << "\nN :" << n << endl;
    return 0;
}