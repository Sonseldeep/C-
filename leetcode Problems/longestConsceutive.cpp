#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int main()
{
  int arr[7] = {102, 4, 100, 101, 3, 2, 1};
  int n = sizeof(arr) / sizeof(arr[0]);
  sort(arr, arr + n);
  int length = 1;
  cout << "Sorted array is: ";

  for (int i = 0; i < n; i++)
  {

    for (int j = i + 1; j <= n; j++)
    {
      while (i, j == true)
      {
        length++;
      }
    }
  }
  cout << "length: " << length << endl;

  return 0;
}