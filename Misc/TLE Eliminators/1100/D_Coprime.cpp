#include <bits/stdc++.h>
using namespace std;

int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            int n;
            cin>>n;
            vector<long long> a(n);
            for(auto& i : a) cin>>i;

            long long ans = -1;
            int i = n - 1, j;
            bool found = false;
            for(; i >= 0 && !found; i--)
            {
                  for(j = i; j >= 0; j--)
                  {
                        if(__gcd(a[i], a[j]) == 1)
                        {
                              long long val = i + j + 2;
                              ans = max(ans, val);
                              break;
                        }
                  }
            }

            cout<<ans<<endl;
      }
}