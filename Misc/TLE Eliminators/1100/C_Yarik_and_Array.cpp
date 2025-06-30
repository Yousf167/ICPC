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
            vector<pair<long long, bool>> a(n);
            for(int i = 0; i < n; i++)
            {
                  long long temp;
                  cin>>temp;
                  bool par = temp % 2 == 0;
                  a[i] = {temp, par};
            }
            

            if(n == 1)
            {
                  cout<<a[0].first<<endl;
                  continue;
            }

            long long maxx = INT_MIN;
            long long sum = a[0].first;
            maxx = max(sum, maxx);
            for(int i = 1; i < n; i++)
            {
                  bool prevPar = a[i - 1].second;
                  bool currPar = a[i].second;
                  long long val = a[i].first;
                  if(currPar != prevPar)
                  {
                        sum += val;
                  }
                  else
                  {
                        sum = val;
                  }
                  maxx = max(maxx, sum);
            }
            maxx = max(maxx, sum);

            for(auto i : a)
            {
                  maxx = max(maxx, i.first);
            }

            cout<<maxx<<endl;
      }
}