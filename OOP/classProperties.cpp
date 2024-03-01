#include <iostream>
using namespace std;

// crating class;
class Hero
{
public:
    // if we dont use public then we it will be private so file cant be displayed;

    // properites;

    string name;
    int age;
    char level;
};
int main()
{
    Hero h1;
    h1.name = "Rajesh Hamal";
    h1.age = 56;
    h1.level = 'A';
    cout << "Name: " << h1.name << endl
         << "Age: " << h1.age << endl
         << "Level: " << h1.level << endl;

    return 0;
}