#include <iostream>
using namespace std;

int main()
{
      int t; cin>>t;
      while(t--)
      {
            size_t n;
            cin>>n;
            bool ans = true;
            for(unsigned long long i = 2; i <= n; i = i << 1)
            {
                  if(i == n)
                  {
                        ans = false;
                        break;
                  }
            }
            cout<<(ans ? "YES" : "NO")<<endl;
      }
}