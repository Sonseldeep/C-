#include <iostream>
using namespace std;
class UnaryOverLoading
{
private:
    int x, y, z;

public:
    void PutData(int a, int b, int c)
    {
        this->x = a;
        this->y = b;
        this->z = c;
    }
    void Display(void)
    {
        cout << "X: " << x << endl
             << "Y: " << y << endl
             << "Z: " << z << endl;
    }
    void operator-()
    {
        x = -x;
        y = -y;
        z = -z;
    }
};

int main()
{
    UnaryOverLoading o1;
    cout << "------------------------------- " << endl;
    o1.PutData(5, -6, 7);
    o1.Display();
    cout << "-----------------------------------" << endl;
    -o1;
    o1.Display();

    return 0;
}