#include <bits/stdc++.h>
using namespace std;

bool Permutable(vector<long long>& a)
{
      map<long long, int> c;
      for(auto i : a)
      {
            c[i]++;
      }

      int minC = INT_MAX;
      for(auto i : c)
      {
            minC = min(minC, i.second);
      }

      return minC >= 2;
}



int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            int n;
            cin>>n;
            bool allEqual = true;
            vector<long long> a(n);
            for(int i = 0; i < n; i++)
            {
                  cin>>a[i];
                  if(i == 0) continue;
                  
                  if(a[i] != a[i-1] && allEqual)
                  {
                        allEqual = false;
                  }
            }

            if(allEqual && n > 1)
            {
                  cout<<n;
                  for(int i = 1; i < n; i++)
                  {
                        cout<<" "<<i;
                  }
                  cout<<endl;
            }
            else if(Permutable(a))
            {
                  vector<long long> ans(n);
                  for(int i = 0; i < n; i++)
                  {
                        ans[i] = i + 1;
                  }
                  
                  
                  long long l = 0, r = 0;
                  while(r < n)
                  {
                        if((a[l] == a[r]))
                        {
                              r++;
                        }
                        else
                        {
                              rotate(ans.begin() + l, ans.begin() + l + 1, ans.begin() + r);
                              l = r;
                        }
                  }
                  
                  rotate(ans.begin() + l, ans.begin() + l + 1, ans.begin() + r);
                  for(auto i : ans)
                  {
                        cout<<i<<" ";
                  }
                  cout<<endl;
            }
            else
            {
                  cout<<-1<<endl;
            }
      }
}