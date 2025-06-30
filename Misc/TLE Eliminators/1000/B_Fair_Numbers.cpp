#include <bits/stdc++.h>
using namespace std;

vector<long long> getDigits(long long n)
{
      vector<long long> ret;
      while(n)
      {
            if(n % 10 != 0) ret.push_back(n%10);
            n/=10;
      }
      return ret;
}

int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            long long n;
            cin>>n;

            bool found = false;
            while(!found)
            {
                  found = true;
                  vector<long long> digits = getDigits(n);
                  for(auto i : digits)
                  {
                        if(n % i != 0 )
                        {
                              found = false;
                              break;
                        }
                  }
                  
                  if(!found)n++;
            }
            cout<<n<<endl;
      }
}