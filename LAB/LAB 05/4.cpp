#include<iostream>
#include<string.h>
using namespace std;

class person
{
 char name[20];
 float age;
 public:
 person(char s[],float a)
 {
 strcpy(name,s);
 age=a;
 }
 person greater(person &x)
 {
 if(x.age>=age)
 return x;
 else
 return *this;
 }
 void display(void)
 {
 cout<<"Name:"<<name<<"\n"<<"Age:"<<age<<"\n";
 }
};

int main()
 { char name1[10]="John";
char name2[10]="Jack";
char name3[10]= "Jim";

 person P1(name1,37.50),P2(name2,29.0),P3(name3,40.25);

 person P=P1.greater(P3);

 cout<<"Elder person is: \n";
 P.display();

 P=P1.greater(P2);

 cout<<"\nElder person is: \n";
 P.display();
 return 0;
 }