#include<iostream>
using namespace std;
class Smallest {
    
    int a;
    int b;
    public: 
    void Putdata();
    void GetData();
    int Solve();

};
void Smallest:: Putdata() {
    cout<<"enter the value of a and b : ";
    cin>> a >> b;

}
void Smallest:: GetData() {
    cout<< "the smallest is "<< Solve();
}
int Smallest :: Solve(){
    if ( a<b){
        return a;
    } else {
        return b;
    }
}
int main(){
    Smallest s1;
    s1.Putdata();
    s1.GetData();


    return 0;
}