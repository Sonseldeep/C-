#include<iostream>
using namespace std;
class Weight {

    public: 
    float w;

       void putData( float m, float g= 9.8) {
        w = (m*g);
       }
       void getData(void) {
        cout<<" weight = "<< w<< endl;
       }

    };
    int main() {
        Weight w1;
        w1.putData(29.8);
        w1.getData();
        return 0;
    }