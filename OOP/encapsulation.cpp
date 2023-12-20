#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    string major;
    int roll;
    double gpa;

public:
    string getName() { return name; }
    void setName(string name)
    {
        this->name = name;
    }
    string getMajor() { return major; }
    void setMajor(string major)
    {
        this->major = major;
    }
    int getRoll() { return roll; }
    void setRoll(int roll)
    {
        this->roll = roll;
    }
};
int main()
{
    Student s1;
    s1.setName("Sandeep");
    s1.setMajor("CSE");
    s1.setRoll(20);
    cout << "student name:" << s1.getName() << endl;
    cout << "Major:" << s1.getMajor() << endl;
    cout << "Roll:" << s1.getRoll() << endl;
    return 0;
}
