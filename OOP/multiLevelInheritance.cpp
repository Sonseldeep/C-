#include <iostream>
using namespace std;
class Animal
{
public:
    void HasLegs()
    {
        cout << "ts has legs" << endl;
    }
    void Eat()
    {
        cout << "they eats" <<endl;
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "bark" << endl;
    }
};
class germanShepard : public Dog
{
};
int main()
{
    germanShepard g1;
    g1.bark();
    g1.Eat();
    g1.HasLegs();

    return 0;
}