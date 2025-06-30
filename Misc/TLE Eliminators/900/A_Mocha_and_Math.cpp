#include <bits/stdc++.h>
using namespace std;
int main()
{
      int t; cin>>t;
      while(t--)
      {
            int n; cin>>n;
            int arr[n];
            int minn = INT_MAX;
            for(int i = 0; i < n; i++)
            {
                  cin>>arr[i];
                  minn &= arr[i];
            }
            cout<<minn<<endl;
      }
}