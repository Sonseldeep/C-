#include<iostream>
using namespace std;
class Largest {
    private: 
    int a;
    int b;
    public:
    void Putdata();
    int Processing();
    void GetData();
};
void Largest :: Putdata() {
    cout<< "enter the value of a and b : ";
    cin>> a >> b ;
}
int Largest :: Processing() {
    if(a >b) {
        return a;
    } else {
        return b;
    }
}
void Largest:: GetData() {
    cout<<"largest number is "<<Processing(); 
}
int main(){
  Largest l;
  l.Putdata();
  l.GetData();
    return 0;
}