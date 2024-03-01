#include<iostream>
#include<math.h>
using namespace std;
class Hour
{
int hr;
public:
Hour(){ }
operator int()
{
int minute;
minute= hr * 60;
return (minute);
}
void getdata()
{
cout<<"Enter Hours";
cin>>hr;
}
};
int main()
{
Hour h1;
float min;
h1.getdata();
min = h1; //basic to user defined type
cout<<"Minutes = "<<min;
}