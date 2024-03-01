#include <bits/stdc++.h>
using namespace std;

template <typename T1, typename T2>

T1 sum(T1 a, T2 b)
{
  return (a + b);
}

int main()
{
  cout << "addition of two different dataTypa: " << sum<float, int>(90.8, 90) << endl;
  cout << "addition of two different dataTypa: " << sum(90, 90.9) << endl;

  return 0;
}