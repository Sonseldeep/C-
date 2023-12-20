#include <bits/stdc++.h>
using namespace std;
template <typename T>
T add(T a, T b)
{
  return (a + b);
}
int main()
{
  cout << "Int Addition: " << add<int>(56.8, 56.2) << endl;
  cout << "float addition: " << add<float>(56.8, 56.2) << endl;

  return 0;
}