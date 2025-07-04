#include <bits/stdc++.h>
using namespace std;
int main()
{
      int t; cin>>t;
      while(t--)
      {
            long long n, x;
            cin>>n>>x;
            vector<long long> a(n);
            for(long long& i : a) cin>>i;
            
            vector<pair<long long, long long>> segments(n);
            for(int i = 0; i < n; i++)
            {
                  segments[i] = {a[i] - x, a[i] + x};
            }

            long long ans = 0;
            long long l = segments[0].first;
            long long r = segments[0].second;
            for(int i = 0; i < n; i++)
            {
                   l = max(segments[i].first, l);
                   r = min(segments[i].second, r);    
                   if(l > r)
                   {
                        ans++;
                        l = segments[i].first;
                        r = segments[i].second;
                   }
            }
            cout<<ans<<endl;
      }
}