#include <iostream>
using namespace std;
template<class T1>
class Test
{
T1 a;
public:
void add (T1 x, T1 y)
{
a=x+y;
}
void mul(T1 x, T1 y)
{
a = x * y;
}
void div(T1 x, T1 y)
{
a = x/y;
}
void sub(T1 x, T1 y)
{
a = x -y;
}
void show()
{
cout<<a<<"\n";
}
};
int main()
{
Test <float> testf;
Test <int> testi;
testf.add(5.23,6.43);testf.show();
testf.div(6.4,2.0);testf.show();
testi.mul(20,32); testi.show();
testi.sub(200,150); testi.show();
return 0;
}