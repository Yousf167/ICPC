/*
Solution Time: 0:15:21
Submission Time: 359 ms
Link: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C
Complexity: O(n + klog(n))
*/

#include <iostream>
using namespace std;


int getRight(int arr[], int n, int target)
{
      int l = 0, r = n;
      while(l < r)
      {
            int m = (l + r) / 2;
            if(arr[m] >= target)
            {
                  r = m;
            }
            else
            {
                  l = m + 1;
            }
      }
      return r + 1;
}

int main()
{
      int n, k;
      cin >> n >> k;
      int arr[n];
      for(int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      
      int q[k];
      for(int i = 0; i < k; i++)
      {
            cin >> q[i];
      }

      for(int i = 0; i < k; i++)
      {
            int target = q[i];
            cout << getRight(arr, n, target) << "\n";
      }
}