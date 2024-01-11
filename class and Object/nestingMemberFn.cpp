#include <iostream>
using namespace std;
class Animal
{
private:
    string name;
    int age;

private:
    void read(void)
    {
        cout << "Enter the name of the animal: ";
        cin >> name;
    }

public:
    void Dog()
    {
        read();
        cout << "age of dog: ";
        cin >> age;
    }
    void display(void);
};
inline void Animal ::display(void)
{
    cout << name << " " << age << endl;
}
int main()
{
    Animal a;
    a.Dog();
    a.display();
    return 0;
}