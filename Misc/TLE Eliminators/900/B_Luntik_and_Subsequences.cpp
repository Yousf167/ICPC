#include <bits/stdc++.h>
using namespace std;


int main()
{
      int t; cin>>t;
      while(t--)
      {
            int n;
            cin>>n;
            int arr[n];
            long long c0 = 0;
            long long c1 = 0;
            for(int& i : arr)
            {
                  cin>>i;
                  if(i == 1)
                  {
                        c1++;
                  }
                  else if(i == 0)
                  {
                        c0++;
                  }
            }
            long long ans = c1 * pow(2, c0);
            cout<<ans<<endl;
      }
}