#include <bits/stdc++.h>
using namespace std;

int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            int n, k;
            cin>>n>>k;
            int arr[n];
            int minn = INT_MAX;
            int c = 0;
            for(int& i : arr) 
            {
                  cin>>i;

                  if(i % 2 == 0)
                  {
                        c++;
                  }
                  if(i % k == 0)
                  {
                        minn = 0;
                  }
                  minn = min(minn, k - (i % k));
            }
            
            if(k == 4)
            {
                  if(c >= 2)
                  {
                        minn = min(0, minn);
                  }
                  else if(c == 1)
                  {
                        minn = min(1, minn);
                  }
                  else if(c == 0)
                  {
                        minn = min(minn, 2);
                  }
            }
            cout<<minn<<endl;
      }
}