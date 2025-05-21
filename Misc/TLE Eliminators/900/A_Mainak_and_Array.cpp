#include <iostream>
using namespace std;

bool maxMinus(int minPos, int maxPos, int n)
{
      if(minPos == 0 || maxPos == n - 1 || maxPos + 1 == minPos)
      {
            return true;
      }
      return false;
}

int main()
{
      int t; cin>>t;
      while(t--)
      {
            int n;
            cin>>n;
            int arr[n];
            for(int i = 0; i < n; i++) 
            {
                  cin>>arr[i];
            }
            int ans = arr[n - 1] - arr[0];
            for(int i = 1; i < n; i++)
            {
                  ans = max(ans, arr[i] - arr[0]);
            }
            for(int i = 0; i < n; i++)
            {
                  ans = max(ans, arr[n - 1] - arr[i]);
            }
            for(int i = 1; i < n; i++)
            {
                  ans = max(ans, arr[i - 1] - arr[i]);
            }
            cout<<ans<<endl;
      }
      /* 
      int t; cin>>t;
      while(t--)
      {
            int n;cin>>n;
            int arr[n];
            int minVal = 1000;
            int minPos;
            int maxVal = 0;
            int maxPos;
            for(int i = 0; i < n; i++) 
            {
                  cin>>arr[i];
                  if(arr[i] < minVal)
                  {
                        minVal = arr[i];
                        minPos = i;
                  }
                  if(arr[i] > maxVal)
                  {
                        maxVal = arr[i];
                        maxPos = i;
                  }
            }

            if(maxMinus(minPos, maxPos, n))
            {
                  cout<<maxVal-minVal<<endl;
                  continue;
            }
            else
            {
                  int maxDiff = -999;
                  for(int i = 1; i < n; i++)
                  {
                        maxDiff = max(maxDiff, arr[i-1] - arr[i]);
                  }
                  maxDiff = max(maxDiff, arr[n - 1] - arr[0]);
                  cout<<maxDiff<<endl;
            }
      }
      */
}