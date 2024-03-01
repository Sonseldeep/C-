#include <iostream>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a > 0)
    {
        cout << "Number is +ve "
             << " " << a << endl;
    }
    else if ( a==0) {
        cout<<"neither +ve nor -ve"<< endl;
    }
    else
    {
        cout << "Number is -ve" << endl;
    }
    return 0;
}