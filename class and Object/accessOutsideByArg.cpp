#include <iostream>
using namespace std;
class Students
{
private:
    string name;
    string major;
    string level;
    int id;
    string phoneNumber;

public:
    void putDta(string aName, string aMajor, string aLevel, int aId);
    void Display(void);
};
void Students::putDta(string aName, string aMajor, string aLevel, int aId)
{
    this->name = aName;

    this->major = aMajor;
    this->level = aLevel;
    this->id = aId;
    
}
void Students::Display(void)
{
    cout << "Name : " << name << endl;
    cout << "Major : " << major << endl;
    cout << "Level : " << level << endl;
    cout << "ID : " << id << endl;
   
}
int main()
{
    Students S1;
    S1.putDta("Sandeep", "Computer Science", "second",20);
    S1.Display();

    return 0;
}