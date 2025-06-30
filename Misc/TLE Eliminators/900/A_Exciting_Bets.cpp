#include <bits/stdc++.h>
using namespace std;
int main()
{
      ios_base::sync_with_stdio(0); cin.tie(0);
      long long t; cin>>t;
      while(t--)
      {
            long long a, b;
            cin>>a>>b;
            if(a == b)
            {
                  cout<<"0 0"<<endl;
                  continue;
            }
            
            long long maxGCD = abs(a - b);
            long long moves1 = b % maxGCD;
            long long moves2 = maxGCD - moves1;
            
            cout<<maxGCD<<" "<<min(moves1, moves2)<<endl;
      }
}