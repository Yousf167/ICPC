#include <bits/stdc++.h>
using namespace std;
int main()
{
      int n, m; cin>>n>>m;
      int arr[n][m];
      vector<int> sum(n + 1);
      for(int row = 0; row < n; row++)
      {
            for(int i = 0; i < m; i++)
            {
                  cin>>arr[row][i];
                  sum[row + 1] += arr[row][i];
            }
      }

      int q; cin>>q;
      while(q--)
      {
            int l, r; cin>>l>>r;
            int res = 0;
            while (l <= r)
            {
                  res += sum[l];
                  l++;
            }      
            cout<<res<<endl;
      }
}