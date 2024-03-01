#include<iostream>
using namespace std;
int main(){
    /*
      int number[15]; // generates the random garbage value
    cout<<"vale at 0 index " << number[0]<<endl;
    cout<<"vale at 1 index " << number[1]<<endl;
    cout<<"vale at 2 index " << number[2]<<endl;
     cout<<"vale at 14 index " << number[14]<<endl;
    */
   int second[3]={5,7,11};
   cout<<"value at 1st index "<<second[1]<<endl;
   int third[30]={1,2,3};
   // 1,2,3, paxadi sab ma 0 hunxa;
   // third[] ={1,2,3}
   // n= 30 print garyo vane 3 paxadi random garbage value dinxa
   int n;
   cin>>n ;
   for(int i=0;i<n;i++){
    cout<<third[i]<< " ";
   }
  

    


    return 0;
}
