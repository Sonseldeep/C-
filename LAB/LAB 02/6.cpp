#include <bits/stdc++.h>
using namespace std;
class Constructor
{
private:
    int a;
    int b;

public:
    Constructor(int x, int y)
    {
        this->a = x;
        this->b = y;
    }
    void Display(void)
    {
        cout << "a: " << a << endl
             << "b: " << b << endl;
    }
};
int main()
{
    Constructor obj1(50, 90);

    obj1.Display();

    return 0;
}