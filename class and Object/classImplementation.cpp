#include <iostream>
using namespace std;
class item {
    private:
    int number;
    float cost;
    public:
    void GetData (int a, float b){
        this-> number = a;
        this-> cost = b;
    }
    void PutData(){
        cout<<"number is "<< number << endl;
        cout<<" cost is "<< cost<<endl;
    }
};
int main(){
    item obj;
    obj.GetData(10, 100.8);
    obj.PutData();
    return 0;
}