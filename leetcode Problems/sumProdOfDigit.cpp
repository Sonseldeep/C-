// given an integer number n, return the difference betwee the product of the digits and the sum of its digits.
// eg n=234;
// output =15;
// product =  2*3*4= 24
// sum = 2+3+4 =9
// result = 24-9 = 15
#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int sum = 0;
    int product = 1;
    while (n != 0)
    {
        int rem = n % 10; // gives the last digit
        sum += rem;
        product *= rem;
        n = n / 10; // remove the last number
    }
    int answer = product - sum;
    cout << "answer = " << answer << endl;
    return 0;
}