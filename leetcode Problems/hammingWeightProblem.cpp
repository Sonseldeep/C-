// n=0000000000000000000000001011
// output = 3
// there are three 1 bits inb above;

// use concept of right shift and check last bit AND gate 1 then return count

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;

    int count = 0;
    while (n != 0)
    {
        // checking the last bit
        if (n & 1)
        {
            count++;
        }
        n = n >> 1; // right shift by 1;
    }
    cout << count << endl; /// printing result.

    return 0;
}