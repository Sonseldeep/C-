#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[6] = {-1, 0, 1, 2, -1, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      for (int k = j + 1; j < n; k++)
      {

        int sum = arr[i] + arr[j] + arr[k];
        if (sum == target)
        {
          cout << "Triplet found: " << arr[i] << " " << arr[j] << " " << arr[k];
        }
      }
    }
  }
  return 0;
}