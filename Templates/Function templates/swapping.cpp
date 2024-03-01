#include <iostream>
using namespace std;
template <typename T>
void swaps(T &a, T &b)
{
     T temp = a;
     a = b;
     b = temp;
}
void passArg(int i, int j, float k, float l)
{
     cout << "Before swap : " << endl;
     cout << "i: " << i << " j: " << j << endl;
     swaps(i, j);
     cout << "after swap : " << endl;
     cout << "i: " << i << " j: " << j << endl;

     cout << endl;
     cout << "Before swap : " << endl;
     cout << "k: " << k << ", l: " << l << endl;
     cout << "after swap : " << endl;

     swaps(k, l);

     cout << "k: " << k << ", l: " << l << endl;
}
int main()
{
     passArg(1, 2, 3.6, 4.7);

     return 0;
}