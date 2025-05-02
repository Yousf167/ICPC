#include <bits/stdc++.h>
using namespace std;

int main()
{
      int n; cin>>n;
      string s;cin>>s;
      vector<bool> f(91);
      for(char c : s) f[toupper(c)] = true;
      for(int i = 'A'; i <= 'Z'; i++)
      {
            if(!f[i])
            {
                  cout<<"NO"<<endl;
                  return 0;
            }
      }
      cout<<"YES"<<endl;
}