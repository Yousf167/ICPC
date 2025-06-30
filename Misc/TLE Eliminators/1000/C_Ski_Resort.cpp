#include <bits/stdc++.h>
using namespace std;

int main()
{
      int t; cin>>t;
      while(t--)
      {
            int n, k, q;
            cin>>n>>k>>q;
            int arr[n];
            for(int i = 0; i < n; i++) 
            {
                  cin>>arr[i];
                  arr[i] = (arr[i] > q) ? 0 : 1;
            }

            long long sum = 0;
            long long count = 0;
            for(int i : arr)
            {
                  if(i == 1) 
                  {
                        count++;
                  }
                  else
                  {
                        if(count >= k)
                        {
                              long long diff = count - k + 1;
                              sum += (diff * (diff + 1)) / 2;
                        }
                        count = 0;
                  }
            }
            if(count >= k)
            {
                  long long diff = count - k + 1;
                  sum += (diff * (diff + 1)) / 2;
            }
            cout<<sum<<endl;
      }
      
}