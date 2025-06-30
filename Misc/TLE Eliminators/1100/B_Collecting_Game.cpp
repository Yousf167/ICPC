#include <bits/stdc++.h>
using namespace std;

int main()
{
      long long t;
      cin>>t;
      while(t--)
      {
            long long n;
            cin>>n;
            vector<pair<long long, long long>> a(n);
            for(long long i = 0; i < n; i++)
            {
                  long long temp;
                  cin>>temp;
                  a[i].first = temp;
                  a[i].second = i;
            }


            sort(a.begin(), a.end(), [](const pair<long long, long long>& x, const pair<long long, long long>& y)
            {
                  return x.first < y.first;
            });


            vector<long long> prefix(n);
            prefix[0] = a[0].first;
            for(long long i = 1; i < n; i++)
            {
                  prefix[i] = prefix[i-1] + a[i].first;
            }


            vector<long long> ans(n);
            unsigned long long score;
            int count;
            for(int i = 0; i < n - 1; i++)
            {
                  score = prefix[i];
                  int j;
                  for(j = i; j + 1< n; j++)
                  {
                        long long next = a[j + 1].first;
                        if(score >= next)
                        {
                              score += next;
                        }
                        else
                        {
                              break;
                        }
                  }
                  count = j;
                  ans[a[i].second] = count;
            }


            ans[a[n-1].second] = n - 1;
            for(auto i : ans)
            {
                  cout<<i<<" ";
            }
            cout<<endl;
      }
}