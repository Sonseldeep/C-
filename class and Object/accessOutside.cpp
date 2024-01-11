#include <iostream>
using namespace std;
class Student
{
private:
    string name;
    int id;
    string major;

public:
    void putName();
    void putId();
    void putMajor();
    void getName();
    void getId();
    void getMajor();
};
void Student ::putName()
{
    cout << "Enter your name: ";
    cin >> name;
}
void Student ::putId()
{
    cout << "Enter your id: ";
    cin >> id;
}
void Student ::putMajor()
{
    cout << "Enter your major: ";
    cin >> major;
}
void Student ::getName()
{
    cout << "name : " << name << endl;
}
void Student ::getId()
{
    cout << "id: " << id << endl;
}
void Student ::getMajor()
{
    cout << "major : " << major << endl;
}
int main()
{
    Student S1;
    S1.putName();
    S1.putId();
    S1.putMajor();
    S1.getName();
    S1.getId();
    S1.getMajor();

    return 0;
}