#include<iostream>
using namespace std;
int main(){
    int i=8;
    int a =i++;
    // post increment=> value increase only after using previous value
    // a holds the value of previous i
    // i is increased by +1
    cout<< "a : " <<a<<endl;
    cout<<"i: "<<i<<endl;
    return 0;
}