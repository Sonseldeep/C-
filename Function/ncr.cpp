#include <iostream>
using namespace std;
int fact(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    else
    {
       return n*fact(n-1);
    }
}
int ncr(int n, int r)

{
    int numerator = fact(n);
    int denomerator = fact(r) *fact(n-r);
    int answer = numerator/denomerator;
    return answer;
}
int main()
{
    int n,r;
    cout<<"enter the value of n and r"<<endl;
    cin>> n>> r;

    cout<< "answer = "<<ncr(n,r)<<endl;


    return 0;
}