#include<iostream>
using namespace std;
int main (){
    int i=0, sum=0;
    while(i<=10){
        if(i%2 ==0){
            sum+=i;
           
        }
         i++;
    }
    cout<<"sum of even number range from 0-10 is "<<" "<< sum<<endl;
    return 0;
}