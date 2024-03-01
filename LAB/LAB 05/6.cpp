#include<iostream>
using namespace std;
class E2;
class E3;
class E1
{ char name[10];
float salary;
public:
void set()
{
cout<<"\n Enter first Employee name and salary";
cin>>name>>salary;
}
friend void process(E1,E2,E3);
};
class E2
{
char name[10];
float salary;
public:
void set()
{

cout<<"\n Enter second Employee name and salary";
cin>>name>>salary;
}
friend void process(E1,E2,E3);
};
class E3
{
char name[10];
float salary;
public:
void set()
{
cout<<"\n Enter third Employee name and salary";
cin>>name>>salary;
}
friend void process(E1,E2,E3);
};
void process(E1 x, E2 y, E3 z)
{
cout<<"\n\nFirst Employee name= "<< x.name;
cout<<"\nFirst Employee salary= "<<x.salary;
cout<<"\n\nSecond Employee name= "<< y.name;
cout<<"\nSecond Employee salary= "<<y.salary;
cout<<"\n\nThirdEmployee name= "<< z.name;
cout<<"\nThird Employee salary= "<<z.salary;
float total = x.salary + y.salary + z.salary;
cout<<"\n\n Their total salary= "<<total;
}
int main()
{
E1 A;
E2 B;
E3 C;
A.set();
B.set();
C.set();
process(A,B,C);
return 0;
}