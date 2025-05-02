#include <iostream>
using namespace std;
int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            long long n, k, x;
            cin>>n>>k>>x;
            long long minsum = (k * (k + 1) ) / 2;
            long long maxsum = (n * (n + 1)) / 2;
            long long l = n - k + 1, r = n;
            long long maxsumright = (r * (r + 1)) / 2 - ((l - 1) * (l)) / 2;
            if(x < minsum || x > maxsum)
            {
                  cout<<"NO"<<endl;
                  continue;
            }
            if(x > maxsumright)
            {
                  cout<<"NO"<<endl;
                  continue;
            }
            cout<<"YES"<<endl;
      }
}