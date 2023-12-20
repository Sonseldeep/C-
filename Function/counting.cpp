#include<iostream>
using namespace std;

void printCounting(int n){
    for(int i=0;i<=n;i++){
        cout<< i <<" ";
    }

}
int main (){
    int n;
    cout<<"enter the value of n you want to count"<<endl;
    cin>>n;
    printCounting(n);

    return 0;
}