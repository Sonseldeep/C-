#include <iostream>
using namespace std;
class Person
{

    float age;
    char name[50];

public:
    void getData(void);
    void displayData(void);
};
void Person ::getData(void)
{
    cout << "enter the name: ";
    cin.getline(name, sizeof(name));
    cout << endl;
    cout << "enter the age: ";
    cin >> age;
}

void Person ::displayData(void)
{
    cout << "\nName : " << name;
    cout << "\n Age: " << age << endl;
}
int main()
{
    Person P;
    P.getData();
    P.displayData();

    return 0;
}