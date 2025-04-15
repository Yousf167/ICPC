#include <iostream>
using namespace std;



int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(0);

      int n, q; cin>>n>>q;
      int arr[n];
      for(int i = 0; i < n; i++) cin>>arr[i];

      int prefix[n]; prefix[0] = arr[0];
      for(int i = 1; i < n; i++)
      {
            prefix[i] = prefix[i - 1] ^ arr[i];
      }

      while(q--)
      {
            int l, r; cin>>l>>r;
            l--;r--;
            cout << (prefix[r] ^ (l > 0 ? prefix[l - 1] : 0)) << endl;
      }
}