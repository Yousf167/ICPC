#include <bits/stdc++.h>
using namespace std;

int main()
{
      ios_base::sync_with_stdio(0); cin.tie(0);
      int t;
      cin>>t;
      while(t--)
      {
            long long x, n;
            cin>>x>>n;
            long long ans;
            
            if(n % 4 == 3)
            {
                  if(x % 2 == 0)
                  {
                        ans = (x+4) + (n / 4) * 4;
                  }
                  else
                  {
                        ans = (x-4) - (n / 4) * 4;
                  }
            }
            else if(n % 4 == 2)
            {
                  if(x % 2 == 0)
                  {
                        ans = x + 1;
                  }
                  else
                  {
                        ans = x - 1;
                  }
            }
            else if(n % 4 == 1)
            {
                  if(x % 2 == 0)
                  {
                        ans = (x - 1) - (n / 4) * 4;
                  }
                  else
                  {
                        ans = (x + 1) + (n / 4) * 4;
                  }
            }
            else if(n % 4 == 0)
            {
                  ans = x;
            }
            cout<<ans<<endl;
      }
}