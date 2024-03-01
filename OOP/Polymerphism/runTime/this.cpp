#include<iostream>
using namespace std;
class A {
    public:
    int a;
    void get_a(){
       this-> a= 20;
    }
    void display(){
        cout<<"the value of a is "<<a<<endl;
    }
    
};
int main(){
    A obj1;
    obj1.get_a();
    obj1.display();
    return 0;
}