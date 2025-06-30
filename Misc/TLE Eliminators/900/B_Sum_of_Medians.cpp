#include <iostream>
using namespace std;
int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            int n, k;
            cin>>n>>k;
            int arr[n*k];
            for(int& i : arr) cin>>i;

            long long sum = 0;
            int pos = n*k;
            while(k--)
            {
                  pos -= (n / 2 + 1);
                  sum += arr[pos];
            }
            cout<<sum<<endl;
      }
}