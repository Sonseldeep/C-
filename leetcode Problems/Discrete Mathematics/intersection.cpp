#include<iostream>
using namespace std;
int main() {
    int a[] = {1,2,3,4,5};
    int b[] = { 2,4,6};

    cout<<"Intersection of set A and Set B:  "<<endl;
    for (int i = 0; i<5; i++) {
        for (int j = 0; j<3; j++) {
            if(a[i]==b[j]){
                cout<<a[i]<<"\t";
            }
        }
    }
    cout<<"\nBy Sandeep Shrestha"<<endl;
    return 0;
}