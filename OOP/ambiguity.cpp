#include<iostream>
using namespace std;
class A {
    public:
    void fun(){
        cout<<"in class A"<<endl;
    }
};
class B {
    public:
    void fun(){
        cout<<"in class B"<<endl;
    }
};
class C:public A,public B{
    public:
};
int main(){
    
    C obj3;
    obj3.A::fun();
    obj3.B::fun();
    return 0;
}