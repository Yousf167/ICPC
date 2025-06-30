#include <bits/stdc++.h>
using namespace std;

int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            long long n, c;
            cin>>n>>c;
            n++;
            vector<long long> a(n);
            a[0] = 0;
            for(int i = 1; i < n; i++) 
            {
                  long long val;
                  cin>>val;
                  a[i] = val + i;
            }

            sort(a.begin(), a.end());

            int count = 0;
            for(int i = 1; i < n; i++)
            {
                  auto val = a[i];
                  if(val <= c)
                  {
                        c -= val;
                        count++;
                  }
                  else
                  {
                        break;
                  }
            }

            cout<<count<<endl;
      }
}