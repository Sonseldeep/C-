#include<iostream>
using namespace std;
class Time {
    private:
    int hours;
    int minute;
    public:
    void getTime(int h, int m){
        hours = h;
        minute = m;
    }
    void putTime(void){
        cout << hours << ":" << minute << endl;
    }
    void sum (Time t1, Time t2);
};

void Time :: sum(Time t1, Time t2) {
    minute = t1.minute + t2.minute;
    hours = minute /60;
    minute = minute % 60;
    hours = hours + t1.hours + t2.hours;
}
int main(){
    Time T1,T2,T3;
    T1.getTime(2,30);
    T2.getTime(3,45);
    T3.sum(T1,T2);
    cout<<"T1 = ";
    T1.putTime();
    cout<<"T2 = ";
    T2.putTime();
    cout<<"T3 = ";
    T3.putTime();
    return 0;
}