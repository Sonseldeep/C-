#include <iostream>
using namespace std;
int main()
{
    int n, sum = 0;
    cin >> n;
    cout << "the sum  from 0 to n is " << endl;
    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }
    cout << "sum : " << sum << endl;
    return 0;
}