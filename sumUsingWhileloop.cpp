#include <iostream>
using namespace std;
int main()
{
    int i = 0, sum = 0;
    while (i <= 5)
    {
        sum += i;
        i++;
    }
    cout << "the sum is "
         << " " << sum << endl;
    return 0;
}