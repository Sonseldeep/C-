#include<iostream>
using namespace std; 

class Animal {
    public:
    void bark(){
        cout<<"bhawu bhawu"<<endl;

    }
};
class Human {
    public:
    void speak(){
        cout<<"hello"<<endl;
    }
};
class Hybrid: public Animal, public Human{

};


int main(){
    Hybrid h1;
    h1.speak();
    h1.bark();
    return 0;
}