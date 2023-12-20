/*
input: n=1
output: true;
2^0 =1


eg: n=16;
output = true;
2^4 = 16

*/

#include <iostream>
#include<math.h>

using namespace std;
bool isPowerOfTwo(int n){
    for (int i = 0; i <= 30; i++)
    {
        int ans = pow(2,i);
        if (ans == n)
        {
            return true;
        }
       
    }
     return false;

}
int main()
{
    int n;
    cin >> n;
    bool result = isPowerOfTwo(n);
    cout<<result<<endl;
    

    return 0;
}
