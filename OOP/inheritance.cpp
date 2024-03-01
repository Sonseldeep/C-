#include<iostream>
using namespace std;

class Human {
    public:
    string sex;
    string name;
    int age;
    int getAge(){
        return this->age;
    }
    void setName(string name){
      this-> name =name;
    }
};
class Male: public Human {
    public:
    string colour;
    void sleep(){
        cout<<"male slepping"<<endl;
    }
};
int main(){
    Male m1;
    cout<<m1.sex<<endl;
    return 0;
}