#include <bits/stdc++.h>
using namespace std;


void solve()
{
      int n;
      cin>>n;
      vector<long long> v(n);
      for(auto& i : v) cin>>i;
      
      vector<long long> pre(n);
      pre[0] = v[0];
      for(int i = 1; i < n; i++)
      {
            pre[i] = pre[i-1] + v[i];
      }

      long long ans = 0;
      for(long long k = 1; k < n; k++)
      {
            if(n % k) continue;

            long long start = k - 1;
            long long res = 0;
            long long maxi = pre[start];
            long long mini = pre[start];
            for(int i = start + k; i < n; i += k)
            {
                  long long cur = pre[i] - pre[i - k];
                  maxi = max(maxi, cur);
                  mini = min(mini, cur);
            }
            ans = max(ans, maxi - mini);
      }
      cout<<ans<<endl;
}


int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            solve();
      }
}