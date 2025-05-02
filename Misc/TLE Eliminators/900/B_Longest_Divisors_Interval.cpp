#include <iostream>
using namespace std;


int main()
{
      int t; cin>>t;
      while(t--)
      {
            long long n;
            cin>>n;
            long long i = 1;
            int count = 0;
            while(n % i == 0)
            {
                  count++;
                  i++;
            }
            cout<<count<<endl;
      }
}