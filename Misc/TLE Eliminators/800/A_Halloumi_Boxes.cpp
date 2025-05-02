#include <bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int start, int end)
{
      for(int i = start; i <= end; i++)
      {
            if(arr[i] < arr[i - 1])
            {
                  return false;
            }
      }
      return true;
}



void solve(int arr[] ,int n, int k)
{
      if(k == 1 && !isSorted(arr, 1, n - 1))//as long as we have a k != 1, we can always change the positions of the elements
      {
            cout<<"NO"<<endl;
            return;
      }
      cout<<"YES"<<endl;
}

int main()
{
      int t;cin>>t;
      while(t--)
      {
            int n, k;
            cin>>n>>k;
            int arr[n];
            for(int& i : arr) cin>>i;
            solve(arr,n,k);
      }
}