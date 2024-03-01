#include<iostream>
using namespace std;
class Items {
    public:
    static  int X;
    void get() {
        cout<< "X: "<< X<<endl;
        X++;
    }
};
int Items :: X;
int main(){
    Items a,b,c;
    a.get();
    b.get();
    c.get();
    return 0;
}