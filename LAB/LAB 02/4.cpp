#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Student
{
private:
    string name;
    string address;
    int roll;
    long long phone;

public:
    void Putdata(string aname, string aAddres, int aRoll, long long aPhone)
    {
        this->name = aname;
        this->address = aAddres;
        this->roll = aRoll;
        this->phone = aPhone;
    }
    void Display()
    {
        cout << "Name: " << name << endl
             << "Address: " << address << endl
             << "Roll No: " << roll << endl
             << "Phone: " << phone << endl
             << endl;
    }
};
int main()
{
    Student s1;
    string name, address;
    cout << "\n enter name";
    cin >> name;
    cout << "\n Enter address";
    cin >> address;

    s1.Putdata(name, address, 20, 9823332855);
    s1.Display();
    Student s2;
    cout << "\n enter name";
    cin >> name;
    cout << "\n Enter address";
    cin >> address;
    s2.Putdata(name, address, 19, 9847155934);
    s2.Display();
    return 0;
}