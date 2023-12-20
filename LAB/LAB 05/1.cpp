#include<iostream>
using namespace std;
class Base
{
public:
void display ()
{
cout<<"\n display base:";
}
virtual void show ()
{
cout <<"\n show base";
}
};
class Derived: public Base
{
public:
void display ()
{
cout<<"\n display derived:";
}
void show ()
{
cout<<"\n show derived";
}
};
int main()
{
Base B;
Derived D;
Base *bptr;
cout<<"\n bptr point to base";
bptr = &B;
bptr ->display(); //calls base version
bptr -> show(); //calls base version
cout<<"\n bptr points to derived";
bptr = &D;
bptr -> display(); // calls base version
// bptr ->calls derived version;

}