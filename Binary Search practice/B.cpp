/*
Solution Time: forgot to set the timer. from 20 to 40 mins
Submission Time: 343 ms
Link: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B
Complexity: O(n + klog(n))
*/

#include <iostream>
using namespace std;


int getLeft(int arr[], int n, int target)
{
      bool found = false;
      int l = 0, r = n;
      while(l < r)
      {
            int m = (l + r) / 2;
            if(arr[m] <= target)
            {
                  l = m + 1;
            }
            else
            {
                  r = m;
            }
      }
      return l;
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
            cout << getLeft(arr, n, target) << "\n";
      }
}