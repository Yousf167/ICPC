#include <iostream>
using namespace std;
int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            int n;cin>>n;
            int arr[n];
            for(int& i : arr) cin>>i; 
            
            for(int i = 0; i < n; i++)
            {
                  if(arr[i] == 1) arr[i]++;
            }

            for(int i = 1; i < n; i++)
            {
                  if(!(arr[i] % arr[i - 1]))
                  {     
                        arr[i]++;
                  }
            }

            for(int i : arr) cout<<i<<" ";

            cout<<endl;
      }
}