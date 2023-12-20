#include<iostream>
using namespace std;
  void Add(int a, int b){

    cout<< "Sum : "<< a+b<< endl;

  }
  void Add( double a, double b){
    cout<<"Sum :"<< a+b<< endl;
  }
  void Add (char c) {
    cout<<"Char: "<< c<< endl;
  }

  int main() {
    Add(9,10);
    Add(3.5,3.2);
    Add('A');
  }