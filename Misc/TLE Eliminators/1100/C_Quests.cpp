#include <bits/stdc++.h>
using namespace std;

int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            int n, k;
            cin>>n>>k;
            
            vector<int> first(n);
            vector<int> second(n);
            for(int& i : first)
            {
                  cin>>i;
            }
            for(int& i : second)
            {
                  cin>>i;
            }

            int maxi = 0, sum = 0, ans = 0;
            for(int i = 0; i < min(n,k); i++)
            {
                  sum += first[i];
                  maxi = max(maxi, second[i]);
                  ans = max(ans, sum + (k - i - 1) * maxi);
            }

            cout<<ans<<endl;
      }
}