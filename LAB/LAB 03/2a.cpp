#include<iostream>
using namespace std;
class space
{
int x;
int y;
int z;
public:
void getdata (int a, int b, int c);
void display (void);
void operator - (); // overloaded unary minus
};
void space:: getdata (int a, int b, int c)
{
x = a;
y = b;
z = c;
}
void space :: display (void)
{
cout <<x<< " " ;
cout << y << " " ;
cout<< z << "\n" ;
}
void space :: operator - () // here operator is a keyword
{
x = -x;
y = -y;
z = -z;
}
int main  ()
{
space s;
s.getdata (10, -20, 30);
cout << "S:";
s.display();
-s; // activates operator-() function
cout << "S:";
s.display ();
}