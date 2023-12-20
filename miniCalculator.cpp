#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter the value of a and b"<<endl;
    cin >> a >> b;

    char o;
    cout << "enter the symbol of operator you want to perform"<<endl;
    cin >> o;

    switch (o)
    {
    case '+':
        cout << "sum is " << (a + b)<<endl;
        break;
    case '-':
        cout << "difference is " << (a - b) << endl;
        break;
    case '*':
        cout << "product is " << (a * b) << endl;
        break;
    case '/':
        cout << "division is " << float(a / b) << endl;
        break;
    default:
        cout << "invalid operation" << endl;
        
    }

    return 0;
}