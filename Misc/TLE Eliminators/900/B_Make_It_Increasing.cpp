#include <iostream>
using namespace std;
int main()
{
      //ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
      int t; cin>>t;
      while(t--)
      {
            int n; cin>>n;
            int arr[n];
            int minn = __INT_MAX__;
            int minIdx;
            for(int i = 0; i < n; i++)
            {
                  cin>>arr[i];
                  if(minn > arr[i])
                  {
                        minn = arr[i];
                        minIdx = i;
                  }
            } 

            if(n == 1)
            {
                  cout<<0<<endl;
                  continue;
            }

            bool possible = (minn >= minIdx);
            int count = 0;
            if(possible)
            {
                  for(int i = n - 1; i > 0; i--)
                  {
                        while(arr[i - 1] >= arr[i])
                        {
                              arr[i - 1] /= 2;
                              count++;
                              if(arr[i - 1] == 0) 
                              {
                                    break;
                              }
                        }
                        if(arr[i - 1] == 0 && i - 1 != 0)
                        {
                              possible = false;
                        }
                  }

            }

            if(possible)
            {
                  cout<<count<<endl;
            }
            else
            {
                  cout<<-1<<endl;
            }
      }
}