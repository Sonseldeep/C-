#include<iostream>
using namespace std; 
class A {
    public:
    int add( int x, int y, int z =0, int w =0) {
        return x+y+z+w;
    }
    double add(double x, double y, double z= 0.0, double w =0.0){
        return x+y+z+w;
    }
};
int main(){
    A a;
    cout<<a.add(1,2,3,5 )<<endl;
    cout<<a.add(1.0,2.0,3.0,4.0)<<endl;
   
    return 0;
}