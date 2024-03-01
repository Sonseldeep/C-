#include<iostream>
using namespace std;
class Sample {
private:
int greater;
public:
Sample(int r)
{greater = r;}
Sample operator > (Sample &obj)
{
if(greater > obj.greater)
cout<<"\nGreater number is: " <<greater;
else
cout<<"\nGreater number is: " <<obj.greater;
}
};
int main()
{
Sample c1(10);
Sample c2(2);
c1 > c2;
return 0;
}