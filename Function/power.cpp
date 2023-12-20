#include <iostream>
using namespace std;

/*
using recursive
int power(int a, int b){
    if(b==0){
        return 1;

    }
    else {
        return a*power(a,b-1);
    }

}
*/
// without r4ecursion
int powWithOutRecursion(int a, int b)
{
    int ans = 1;
    for (int i = 1; i <= b; i++)
    {
        ans = ans * a;
    }
   return ans;
}
int main()
{
    int a, b;
    cout << "enter the c=vale of a and b" << endl;
    cin >> a >> b;
    int result = powWithOutRecursion(a, b);
     cout<<"result = "<< result<<endl;

    // int result = power(a,b);
    // cout<<"result = "<< result<<endl;

    return 0;
}