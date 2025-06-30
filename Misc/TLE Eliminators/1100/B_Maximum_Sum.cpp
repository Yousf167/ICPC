#include <bits/stdc++.h>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            long long n, k;
            cin >> n >> k;
            vector<long long> a(n);
            for (auto &i : a) 
            
            
            cin >> i;

            sort(a.begin(), a.end());
            vector<long long> pre(n + 1, 0);
            for (int i = 0; i < n; i++)
            {
                  pre[i + 1] = pre[i] + a[i];
            }

            long long maxSum = 0;
            for (int i = 0; i <= k; i++)
            {
                  int left = 2 * i;
                  int right = n - (k - i);
                  long long currentSum = pre[right] - pre[left];
                  maxSum = max(maxSum, currentSum);
            }

            cout << maxSum << endl;
      }
      return 0;
}