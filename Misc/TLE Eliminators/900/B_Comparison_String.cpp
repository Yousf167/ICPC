#include <bits/stdc++.h>
using namespace std;

int main()
{
      int t; cin>>t;
      while (t--)
      {
            int n; cin>>n;
            string s; cin>>s;
            int Max = 1, curr = 1;
            for(int i = 1; i < n; i++)
            {
                  if(s[i] == s[i - 1])
                  {
                        curr++;
                  }
                  else
                  {
                        Max = max(Max, curr);
                        curr = 1;
                  }
            }
            Max = max(Max, curr);
            cout<<Max + 1<<endl;
      }
}