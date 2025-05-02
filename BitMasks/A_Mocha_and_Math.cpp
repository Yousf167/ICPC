#include <bits/stdc++.h>
using namespace std;
#define smurf    ios::sync_with_stdio(false);cin.tie(NULL); cout.tie(NULL)





int main()
{
      smurf;
      int t;
      cin>>t;
      while(t--)
      {
            int n;
            cin>>n;
            int arr[n];
            for(int& i : arr) cin>>i;
            int andsum = arr[0];
            for(int i : arr) andsum &= i;
            cout<<andsum<<endl;
      }
}