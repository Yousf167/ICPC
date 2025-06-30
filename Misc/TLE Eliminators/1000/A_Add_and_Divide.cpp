#include <bits/stdc++.h>
using namespace std;

int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            long long a, b;
            cin>>a>>b;
            long long ans = INT_MAX;
            for(int addition = 0; addition < 32; addition++)
            {
                  long long operations = addition;
                  long long B = b + addition;
                  if(B == 1) continue;

                  long long A = a;
                  while(A > 0)
                  {
                        A /= B;
                        operations++;
                  }
                  ans = min(ans, operations);
            }
            cout<<ans<<endl;

      }
}