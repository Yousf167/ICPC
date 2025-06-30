#include <bits/stdc++.h>
using namespace std;

int main()
{
      int t; cin>>t;
      while(t--)
      {
            long long n, x;
            cin>>n>>x;
            vector<long long> a(n);
            vector<long long> b(n);
            vector<long long> c(n);

            
            for(auto& i : a)
            {
                  cin>>i;
            }
            
            for(auto& i : b)
            {
                  cin>>i;
            }
            for(auto& i : c)
            {
                  cin>>i;
            }
            

            if(x == 0)
            {
                  cout<<"YES"<<endl;
                  continue;
            }


            long long ans = 0LL;
            for(auto i : a)
            {
                  if(i > x) break;

                  ans |= i;
            }
            for(auto i : b)
            {
                  if(i > x) break;

                  ans |= i;
            }
            for(auto i : c)
            {
                  if(i > x) break;

                  ans |= i;
            }
            

            if(ans == x)
            {
                  cout<<"YES";
            }
            else
            {
                  cout<<"NO";
            }
            cout<<endl;
      }

}