#include <bits/stdc++.h>
using namespace std;
class Copy
{
    int A;

public:
    Copy(int x)
    {
        this->A = x;
    }
    Copy(Copy &y)
    {
        this->A = y.A;
    }
    void Display(void)
    {
        cout << "A: " << A << endl;
    }
};
int main()
{
    Copy Obj1(52);
    Obj1.Display();

    Copy obj2(Obj1);
    obj2.Display();
    Copy obj3 = obj2;
    obj3.Display();

    return 0;
}