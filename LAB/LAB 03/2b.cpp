#include <iostream>
using namespace std;
class Sample
{
int num;
public:
Sample(){}
Sample(int n)
 { num = n; }

void operator = (Sample &y )
{
cout<<"Value = "<<y.num;
}
};
int main() {
Sample val;
Sample f(2);
 val = f;
return 0;
}