#include <bits/stdc++.h>
using namespace std;
int main()
{
      int n; cin>>n;
      while(n--)
      {
            string s, t; 
            cin>>s>>t;
            vector<string> possible(s.size(), "");
            vector<bool> taken(s.size(), false);
            for(auto target : t)
            {
                  for(int i = s.size() - 1; i >= 0; i--)
                  {
                        if(s[i] == target && !taken[i])
                        {
                              possible[i] = target;
                              taken[i] = true;
                              break;
                        }
                  }
            }
            
            string reconstruction = "";
            for(auto p : possible)
            {
                  if(p != "")reconstruction += p;
            }
            
            if(reconstruction.compare(t) != 0)
            {
                  cout<<"NO"<<endl;
            }
            else
            {
                  cout<<"YES"<<endl;
            }
      }
}