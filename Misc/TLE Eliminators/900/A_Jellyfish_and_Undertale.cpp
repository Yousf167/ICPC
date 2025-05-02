#include <iostream>
using namespace std;
int main()
{
      int t; cin>>t;
      while(t--)
      {
            int a, b, n; cin>>a>>b>>n;
            int arr[n];
            long long ans = b;
            for(int& i : arr) cin>>i;
            for(int i : arr)
            {
                  ans += min(i, a - 1);
            }
            cout<<ans<<endl;
      }
}