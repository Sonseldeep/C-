#include<iostream>
using namespace std;
class B
{
int a; //private, not inheritable
public:
int b;
void get_ab();
int get_a (void);
void show_a(void);
};
class D: public B // public derivation
{
int c;
public:
void mul(void);
void display(void);
};
//……………………
void B:: get_ab(void)
{
a = 5; b = 10;
}
int B:: get_a()
{
return a;
}
void B:: show_a()
{
cout<<"a="<<a<<"\n";
}
void D:: mul()
{
c = b * get_a(); // a is private can not be inherited
}
void D:: display()
{
cout<<"a="<<get_a()<<"\n";

cout<<"b="<<b<<"\n";
cout<<"c="<<c<<"\n";
}
int main()
{
D d;
d.get_ab();
d.mul();
d.show_a();
d.display();
return 0;
}