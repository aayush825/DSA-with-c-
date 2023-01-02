/*
Dim var1 As Integer = 10
Dim var2 As Integer = 3
var1 -= var2
' The value of var1 is now 7.
*/

#include<bits/stdc++.h>

using namespace std;

int longestSubArrWithSumK_Optimal(int arr[], int n, int k) {
  int start = 0, end = -1, sum = 0, maxLength = 0;
  while (start < n) {
    while ((end + 1 < n) && (sum + arr[end + 1] <= k))
      sum += arr[++end];

    if (sum == k)
      maxLength = max(maxLength, (end - start + 1));

    sum -= arr[start];
    start++;
  }
  return maxLength;
}

int main() {

  int arr[] = {7,1,6,0};
  int n = sizeof(arr) / sizeof(arr[0]), k = 7;

  cout << "Length of the longest subarray with sum K is " << 
  longestSubArrWithSumK_Optimal(arr, n, k);

  return 0;
}