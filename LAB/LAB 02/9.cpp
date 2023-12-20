#include <bits/stdc++.h>
using namespace std;
class Destructor
{
public:
    Destructor()
    {
        cout << "Constructor is called" << endl;
    }
    ~Destructor()
    {
        cout << "Destructor is called" << endl;
    }
};
int main()
{
    Destructor d;

    return 0;
}