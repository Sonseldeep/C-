#include<bits/stdc++.h>
using namespace std;
class City {
    string CityName;
    float distFromKtm;
    public:
    void getData(string aCityName, float aDistFromKtm){
        this->CityName = aCityName;
        this->distFromKtm=aDistFromKtm;
    }
    void Display(){
        cout<<"City Name: "<< CityName<<endl<< "DistFromKTM: "<< distFromKtm<<endl;
    }
    void addDistance( City c1, City c2){
        double distance = c1.distFromKtm + c2.distFromKtm;
        cout<<"Total Distance: "<< distance<<endl;
    }


};

int main(){
    City c1, c2, c3;
    c1.getData("pokhara", 250.50);
    c2.getData("Dhangadi", 350.56);
    c1.Display();
    c2.Display();
    c3.addDistance(c1,c2);

    return 0;
}