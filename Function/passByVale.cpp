#include<iostream>
using namespace std;
void dummpy(int n){
    n++;
    cout<<"N = "<< n <<endl;
}
int main(){
    int n;
    cout<<"enter n "<<endl;
    cin>>n;
    dummpy(n);
    cout<<"N = "<< n <<endl;
    return 0;
}