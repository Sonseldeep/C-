// given a signed 32-bit integer x, return x with its digits reversed.
// if reversing x causes the value to go outside the signed 32 bit integer range [-2^31, 2^31-1] then return 0
// eg; x = 123;
// output = 321;

#include <iostream>
#include <climits>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int reverse = 0;
    while (n != 0)
    {
        int rem = n % 10;
        if ((reverse > INT_MAX / 10) || (reverse < INT_MIN / 10))
        {
            return 0;
        }
        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    cout << reverse << endl;

    return 0;
}