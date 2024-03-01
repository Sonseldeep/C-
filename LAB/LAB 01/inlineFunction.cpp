#include<iostream>
using namespace std;
class Greeting {

    private:
    string name;
    public:
       inline void GetData(){
        cout<<"Hello "<<name<<endl;
        }
        void putData(string aname) {
            this->name = aname;

        }
 };
int main(){
    Greeting g1;
    g1.putData("Sandeep");
    g1.GetData();
    return 0;

    
}