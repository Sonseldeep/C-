#include<iostream>
using namespace std;
int gcd(int a, int b){
    if ( b == 0){
        return a;
    }
    else 
    return gcd(b, a%b);
}
int main(){
    cout<<"enter the value of a:";
    int a,b;
    cin>> a;
    cout<<"enter the value of b:";
    cin>>b;

    int result = gcd(a,b);
    cout<< "the GCD of "<< a <<" and "<<b <<" is "<< result<<endl;

    cout<<"By Sandeep Shrestha"<<endl;
    return 0;
    
}