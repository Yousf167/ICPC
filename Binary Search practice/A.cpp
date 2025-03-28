/*
Time: 0:23:42
Complexity: O(n + k log n)
Problem: https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A
*/

#include <iostream>
using namespace std;

bool binsearch(int arr[], int n, int target)
{
      int l = 0, r = n - 1;
      bool found = false;
      while (l <= r)
      {
            int mid = (l + r) / 2;
            if (arr[mid] == target)
            {
                  found = true;
                  break;
            }
            else if (arr[mid] < target)
            {
                  l = mid + 1;
            }
            else
            {
                  r = mid - 1;
            }
      }
      return found;
}

int main()
{
      int n, k;
      cin >> n >> k;
      
      int arr[n];
      int queries[k]; 

      for (int i = 0; i < n; i++)
      {
            cin >> arr[i];
      }
      for (int i = 0; i < k; i++)
      {
            cin >> queries[i];
      }


      for(int i = 0; i < k; i++)
      {
            int x = queries[i];
            if (binsearch(arr, n, x))
            {
                  cout << "YES" << endl;
            }
            else
            {
                  cout << "NO" << endl;
            }
            
      }
}