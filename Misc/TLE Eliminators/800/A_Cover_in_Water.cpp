#include <bits/stdc++.h>
using namespace std;

int main()
{
      int t; cin>>t;
      while(t--)
      {
            int n; cin>>n;
            int sum = 0;
            string s; cin>>s;
            int prev = 0;
            unordered_map<int, string> empty;
            for(int i = 0, idx = 0; i < n; i++)
            {
                  if(s[i] == '#')
                  {
                        idx++;
                        continue;
                  }

                  empty[idx] += s.at(i);
            }

            
            bool found = false;
            for(auto p : empty)
            {
                  if(p.second.size() >= 3) 
                  {
                        found = true;
                        break;
                  }
                  sum += p.second.size();
            }

            cout<<(found ? 2 : sum)<<endl;
      }
}