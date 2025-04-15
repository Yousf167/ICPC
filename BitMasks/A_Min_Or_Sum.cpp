#include <iostream>
using namespace std;
int main()
{
      ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
      int t; cin>>t;
      int n;
      while(t--)
      {
            cin>>n;
            int sum = 0;
            while(n--)
            {
                  int num; cin>>num;
                  sum |= num;
            }
            cout<<sum<<endl;
      }
}