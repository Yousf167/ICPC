#include <bits/stdc++.h>
using namespace std;
int main()
{
      int t; cin>>t;
      while(t--)
      {
            int n, x; cin>>n>>x;
            int gas[n];
            for(int& i : gas)cin>>i;

            if(n == 1)
            {
                  int dist1 = gas[0];
                  int dist2 = x - gas[0];
                  int dist3 = dist2 * 2;
                  cout<<max(dist1, max(dist2, dist3))<<endl;
                  continue;
            }

            int Max = gas[0];//CORNER CASE: unmeasured distance from start to the first gas station
            
            for(int i = 1; i < n; i++)
            {
                  int dist = gas[i] - gas[i - 1];
                  if(dist > Max) Max = dist;
            }

            if((x - gas[n - 1]) * 2 > Max) Max = (x - gas[n - 1]) * 2;

            cout<<Max<<endl;
      }
}