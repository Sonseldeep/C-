#include <iostream>
using namespace std;
template <typename T1>
void swaps(T1 &a, T1 &b)
{
  T1 temp = a;
  a = b;
  b = temp;
}

template <typename T2>
void bubbleSort(T2 a[], int n)
{
  for (int i = 0; i < n - 1; i++)
  {
    for (int j = 0; j < n - i - 1; j++)
    {
      if (a[j] > a[j + 1])
      {
        swaps(a[j], a[j + 1]);
      }
    }
  }
}

int main()
{
  int x[5] = {4, 1, 3, 2, 5};
  bubbleSort(x, 5);
  cout << "sorted array" << endl;
  for (int k = 0; k < 5; k++)
  {
    cout << x[k] << " ";
  }
  return 0;
}