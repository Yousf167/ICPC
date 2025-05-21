#include <iostream>
using namespace std;
int main()
{
      int t; cin>>t;
      while(t--)
      {
            int n; cin>>n;
            int arr[n];
            for(int& i : arr) cin>>i;

            int zeroCount = 0;
            for(int i : arr)
            {
                  if(i == 0) zeroCount++;
            }
            
            bool foundZero = false;
            
            int l = 0;
            int r = n - 1;
            while(arr[l] == 0) l++;
            while(arr[r] == 0) r--;

            for(int i = l; i <= r; i++)
            {
                  if(arr[i] == 0)
                  {
                        foundZero = true;
                        break;
                  }
            }


            if(zeroCount == n)
            {
                  cout<<0<<endl;
            }
            else if(!foundZero)
            {
                  cout<<1<<endl;
            }
            else
            {
                  cout<<2<<endl;
            }
      }
}