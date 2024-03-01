# include <iostream>
using namespace std;
class student
{
protected:
int roll_number;
public:
void get_number (int);
void put_number (void);
};

void student:: get_number (int a)
 {
 roll_number = a;
 }
void student:: put_number()
 {
 cout <<"Roll No: "<< roll_number <<endl;
 }
class test: public student // first derivation
{
protected:
float sub1;
float sub2;
public:
void get_marks (float, float);
void put_marks (void);
};
void test:: get_marks (float x, float y)
 {
 sub1 = x;
 sub2 = y;
 }
void test:: put_marks ()
 {
 cout <<"Marks in S1: " << sub1 <<endl;
 cout << "Marks in S2: " << sub2 <<endl;
}
class result: public test // second derivation
{
float total;
public:
void display (void);
};
void result:: display (void)
 {
 total = sub1 + sub2;
 put_number ();
 put_marks();
 cout << " \n total =" << total;
 }
int main ()
{
result student1;

student1.get_number (111);
student1.get_marks (75.0, 59.5);
student1.display();
}