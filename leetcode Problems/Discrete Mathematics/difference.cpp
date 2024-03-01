#include<iostream>
using namespace std;
int  main() {
    int a[] = { 1,2,3,4,5};
    int b[] = { 1,2,6,7,8};
    int j;

    cout<< "the difference of set A and set B A-B :";
    for (int i =0; i<5;i++){
        for(j=0; j<5;j++){
            if(a[i]==b[j]){
                break;
            } 
           

        }
         if (j ==5) {
            cout<<a[i]<< " ";
           }
           
           
        
    }
    cout<<"\nby Sandeep Shrestha";
    return 0;
}