#include<bits/stdc++.h>
using namespace std;
class Complex {

    double a, b;
    public: 
    Complex() {}
    Complex (double x) {
        a = b= x;
        
    }
    Complex (double x, double y) {
        this-> a =x;
        this->b = y;
    }

    void Add( Complex c1, Complex c2) {
        a = c1.a + c2.a;
        b = c1.b + c2.b;
    }
    void Display(void){
        cout<< a << "+"<< b <<"i"<<endl; 
    }
};
int main(){
    Complex A(2.7,3.5);
    Complex B(1.6);
    Complex C;
    C.Add(A,B);
  cout<< "A: ";
  A.Display();
    cout<< "B: ";
  B.Display();
    cout<< "C: ";
  C.Display();



    return 0;
}