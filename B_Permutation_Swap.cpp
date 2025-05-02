#include <bits/stdc++.h>
using namespace std;
int main()
{
      int t; cin>>t;
      while(t--)
      {
            int n;
            cin>>n;
            int arr[n];
            int g = 0;
            for(int& i : arr) cin>>i;
            for(int i = 0; i < n; i++)
            {
                  int k = abs(arr[i] - (i + 1));
                  if(arr[i] != i + 1)
                  {
                        g = gcd(g, k);
                  }
            }
            cout<<g<<endl;
      }
}