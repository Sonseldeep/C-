# include <iostream>
using namespace std;
class B
{
int a;
public:
int b;
 void get_ab();
 int get_a(void);
void show_a(void);
 };

class D: private B
{
int c;
public:
void mul (void);
void display (void);
};
// ……………………….
void B:: get_ab(void)
{
cout<<" Enter value for a and b";
cin>> a >>b;
}
int B:: get_a()
{
return a;
}
void B:: show_a ()
{
cout <<"a = " << a <<"\n";
}
void D:: mul ()
{
get_ab();
c =b * get_a(); // a is private

}
void D:: display()
{ show_a();
cout<<"b="<<"\n";
cout<<"c="<<c<<"\n";
}
int main()
{ D d;
// d.get_ab(); won't work
d.mul();
// show_a(); won't work
d.display();
//d.b = 20; won't work b is private
return 0;
}