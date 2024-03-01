#include<iostream>
using namespace std;

class A {
    public:
    void add(){
        cout<<"add"<<endl;
    }
    int add( int a, int b){
        int c = a+b;
        return c;
    }

    
};
int main(){
    A a;
    a.add();
    cout<< a.add(1,2)<<endl;
    return 0;
}