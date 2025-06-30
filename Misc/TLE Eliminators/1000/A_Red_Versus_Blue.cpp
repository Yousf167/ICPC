#include <bits/stdc++.h>
using namespace std;

void solve(vector<char>& ans, int n, char smallerTeam, int size)
{
      for(int i = 1; i <= size; i++)
      {
            int point = n * (i / (size + 1.0f));
            ans[point] = smallerTeam;
      }

      char otherteam = (smallerTeam == 'R' ? 'B' : 'R');
      for(int i = 0; i < n; i++)
      {
            if(ans[i] != smallerTeam)
            {
                  ans[i] = otherteam;
            } 
      }
}

int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            int n, r, b;
            cin>>n>>r>>b;
            vector<char> ans(n);
            
            if(r < b)
            {
                  solve(ans, n, 'R', r);
            }
            else
            {
                  solve(ans, n, 'B', b);
            }


            for(char i : ans)
            {
                  cout<<i;
            }
            cout<<endl;
      }
}