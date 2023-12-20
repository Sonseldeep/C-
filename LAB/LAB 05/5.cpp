#include<iostream>
using namespace std;
class A
{

public:
virtual void show () = 0; // pure virtual function
};
class B: public A
{
public:
void show( ) // pure virtual function is overriden here
{
cout <<"show method is implemented here";
}
};
int main ()
{
A * ptr;
// ptr = new A; Cannot create instance of abstract class A
ptr = new B;
ptr->show( );
return 0;
}