#include<iostream>
using namespace std;
class X
{
int z;
char y;
public:
X() { }
X (char p)
{
z = (int)p;
y = p;
}
void show()

{
cout<<z<<y;
}
};
int main ()
{
char s = 'a';
X x1;
 x1 = s; // calls parameterized constructor. 's' is basic type and x1 is class type.
 x1.show();
return 0;
}