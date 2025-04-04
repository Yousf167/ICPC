#include<bits/stdc++.h>
using namespace std;
int binSearch(int arr[], int n, int l, int r, int target)
{
      if(l > r || r > n || target < l || r < target)
      {
            return -1;
      }
      int m = (l + r)/2;
      if(arr[m] == target)
      {
            return m;
      }

      if(m < target)
      {
            return binSearch(arr, n, m + 1, r, target);
      }

      if(target < m)
      {
            return binSearch(arr, n, l, m - 1, target);
      }
}


int main()
{
      int n = 1000;
      int arr[n];
      for(int i = 0; i < n; i++)
      {
            arr[i] = i;
      }

      cout<<binSearch(arr, n, 0, n, 34);
}