#include <iostream>
using namespace std;
class employee
{
private:
    char name[30];
    int age;

public:
    void getData(void);
    void putData(void);
};
void employee :: getData(void){
    cout << "Enter name: ";
    cin >> name;
    cout << "Enter age: ";
    cin >> age;
}
void employee :: putData(void) {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
}

int main()
{
    employee emp[3];
        for (int i=0 ;i<3 ;i++){
            cout<<"details: "<<i+1<<endl;
            emp[i].getData();
        }
        cout<<"\n";
        for(int i=0 ;i<3;i++){
            emp[i].putData();
        }
    return 0;
}