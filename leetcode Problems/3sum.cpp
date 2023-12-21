#include <bits/stdc++.h>
using namespace std;
int main()
{
  int arr[6] = {-1, 0, 1, 2, -1, 4};
  int n = sizeof(arr) / sizeof(arr[0]);
  int target = 0;

  sort(arr, arr + n);
  for (int i = 0; i < n; i++)
  {

    int j = i + 1;
    int k = n - 1;
    while (j < k)
    {
      int sum = arr[i] + arr[j] + arr[k];
      if (sum == target)
      {
        cout << "Triplet found : " << arr[i] << " " << arr[j] << " " << arr[k] << endl;
      }
      if (sum < target)
      {
        j++;
      }
      else
      {
        k--;
      }
    }
  }

  return 0;
}