#include <bits/stdc++.h>
using namespace std;

int minOps(string n, string val)
{
      int ops = 0;
      int index = val.size() - 1;
      for(int i = n.size() - 1; i >= 0; i--)
      {
            if(n[i] == val[index])
            {
                  index--;
                  if(index < 0)
                  {
                        break;
                  }
            }
            else
            {
                  ops++;
            }
      }
      if(index >= 0)
      {
            ops = INT_MAX;
      }
      return ops;
}

int main()
{
      int t; cin>>t;
      while(t--)
      {
            string n; cin>>n;
            vector<string> possible = {"00", "25", "50", "75"};
            int ans = INT_MAX;
            for(auto p : possible)
            {
                  ans = min(ans, minOps(n, p));
            }
            cout<<ans<<endl;
      }
}