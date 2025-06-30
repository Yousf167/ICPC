#include <bits/stdc++.h>
using namespace std;
int main()
{
      int t; cin>>t;
      while(t--)
      {
            int n, x;
            cin>>n>>x;
            double arr[n];
            double sum1 = 0;
            long long sum2 = 0;
            for(double& i : arr) 
            {
                  cin>>i;
                  sum1 += i / x;
                  sum2 += ceil(i / x);
            }
            double dif = sum1 - (long long)sum1;

            cout<<fixed<<setprecision(0)<<(dif < 1e-9 ? (long long)sum1 : ceil(sum1))<<" "<<sum2<<endl;
      }
}