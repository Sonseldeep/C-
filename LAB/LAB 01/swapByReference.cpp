#include <iostream>
#include <iomanip>
using namespace std;

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 10;
    int b = 20;
    cout << "Before Swap " << endl;
    cout << setw(5) << " a : " << a << setw(5) << endl;
    cout << setw(5) << " b : " << b << setw(5) << endl;
    cout << " After Swap" << endl;
    swap(a, b);
    cout << setw(5) << " a : " << a << setw(5) << endl;
    cout << setw(5) << " b : " << b << setw(5) << endl;

    return 0;
}