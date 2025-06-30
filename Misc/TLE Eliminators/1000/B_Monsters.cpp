#include <bits/stdc++.h>
using namespace std;

int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            int n, k;
            cin>>n>>k;
            vector<pair<long long, long long>> health(n);
            for(long long i = 0; i < n; i++)
            {
                  long long x;
                  cin>>x;
                  health[i] = {x, i + 1};
            }

            for(long long i = 0; i < n; i++)
            {
                  health[i].first %= k;
                  if(health[i].first ==  0) health[i].first = k;
            }

            sort(health.begin(), health.end(), [&](pair<long long, long long> a, pair<long long, long long> b)
            {
                  if(a.first != b.first) return a.first > b.first;

                  return a.second < b.second;
            });

            for(auto i : health)
            {
                  cout<<i.second<<" ";
            }
            cout<<endl;
      }
}