#include <iostream>
#include <vector>
using namespace std;
int main()
{
      int t; cin>>t;
      while(t--)
      {
            size_t n, q; cin>>n>>q;
            int arr[n];
            for(int i = 0; i < n; i++) 
            {
                  if(i == 0) 
                  {
                        cin>>arr[0];
                        continue;
                  }
                  int temp; cin>>temp;
                  arr[i] = arr[i - 1] + temp;
            }
            while(q--)
            {
                  int l, r, k;
                  cin>>l>>r>>k;
                  l--;r--;
                  int segment;
                  if(l - 1 < 0)
                  {
                        segment = arr[r];
                  }
                  else
                  {
                        segment = arr[r] - arr[l - 1];
                  }
                  
                  int newsum = arr[n - 1] - segment + (r - l + 1) * k;
                  cout<<((newsum % 2) ? "YES" : "NO")<<endl;
            }
      }
}