#include <bits/stdc++.h>
using namespace std;
int main()
{
      int t; cin>>t;
      while(t--)
      {
            int n, k;
            cin>>n>>k;
            vector<int> v(n);
            for(int& i : v) cin>>i;

            if(n == 1)
            {
                  cout<<0<<endl;
                  continue;
            }

            sort(v.begin(), v.end());
            int longestStreak = 1;
            int count = 1;
            for(int i = 1; i < n; i++)
            {
                  if(v[i] - v[i - 1] <= k)
                  {
                        count++;
                        longestStreak = max(longestStreak, count);
                  }
                  else
                  {
                        longestStreak = max(longestStreak, count);
                        count = 1;
                  }
            }
            cout<<n - longestStreak<<endl;
      }
}