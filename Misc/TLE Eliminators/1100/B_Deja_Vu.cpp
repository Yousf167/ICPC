#include <bits/stdc++.h>
using namespace std;

vector<long long> generatePowers2()
{
      vector<long long> p(31,1);
      p[1] = 2;
      for(int i = 2; i < 31; i++)
      {
            p[i] *= 2 * p[i - 1];
      }
      return p;
}

int main()
{
      auto powersOf2 = generatePowers2();
      int t = 1;
      cin>>t;
      while(t--)
      {
            int n, q;
            cin>>n>>q;
            vector<long long> a(n);
            vector<long long> x(q);

            for(auto& i : a) cin>>i;
            for(auto& i : x) cin>>i;

            for(int i = 0; i < q; i++)
            {
                  for(int j = 0; j < n; j++)
                  {
                        if(a[j] % powersOf2[x[i]] == 0)
                        {
                              a[j] += powersOf2[x[i] - 1];
                        }
                  }
            }

            for(auto i : a)
            {
                  cout<<i<<" ";
            }
            cout<<endl;
      }
}