#include<iostream>
using namespace std;
class Animal{
    public:
    string name;;
    int age;
    void speak(){
        cout<<"sepak"<<endl;
    }
};
class Dog: public Animal{
    
};
int main(){
    Dog d;
    d.speak();
    cout<<d.age<<endl;
    return 0;
}