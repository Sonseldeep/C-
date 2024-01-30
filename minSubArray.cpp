#include <iostream>
#include <climits>
using namespace std;

int maxCrossingSum(int arr[], int l, int m, int h)
{
  int sum = 0;
  int left_sum = INT_MIN;

  // Include elements on left of mid.
  for (int i = m; i >= l; --i)
  {
    sum = sum + arr[i];
    if (sum > left_sum)
      left_sum = sum;
  }

  sum = 0;
  int right_sum = INT_MIN;

  // Include elements on right of mid
  for (int i = m + 1; i <= h; ++i)
  {
    sum = sum + arr[i];
    if (sum > right_sum)
      right_sum = sum;
  }

  // Return sum of elements on left and right of mid
  return max(left_sum + right_sum, max(left_sum, right_sum));
}

int maxSubArraySum(int arr[], int l, int h)
{
  // Invalid Range: low is greater than high
  if (l > h)
    return INT_MIN;

  // Base Case: Only one element
  if (l == h)
    return arr[l];

  // Find middle point
  int m = (l + h) / 2;

  /* Return maximum of following three possible cases
     a) Maximum subarray sum in left half
     b) Maximum subarray sum in right half
     c) Maximum subarray sum such that the subarray crosses the midpoint */
  return max(maxSubArraySum(arr, l, m),
             max(maxSubArraySum(arr, m + 1, h),
                 maxCrossingSum(arr, l, m, h)));
}

int main()
{
  int arr[] = {13, -3, -25, -3, -16, -23, 18, 20, -7, 12, -5, -22, 15, -4, 7};
  int n = sizeof(arr) / sizeof(arr[0]);
  int max_sum = maxSubArraySum(arr, 0, n - 1);
  cout << "Maximum contiguous sum is " << max_sum;
  return 0;
}
