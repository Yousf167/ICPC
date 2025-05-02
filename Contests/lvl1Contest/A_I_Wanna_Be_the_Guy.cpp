#include <bits/stdc++.h>
using namespace std;

bool solve(bitset<101> f, int n)
{
      if(n == 0) return true;
      if(!f[n]) return false;
      return solve(f, n - 1);
}

int main()
{
      ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
      int n; cin>>n;
      int x; cin>>x;
      int lvlsX[x];
      for(int& i : lvlsX) cin>>i;
      int y; cin>>y;
      int lvlsY[y];
      for(int& i : lvlsY) cin>>i;

      bitset<101> found;
      for(int i : lvlsX) found[i] = 1;
      for(int i : lvlsY) found[i] = 1;

      cout<<(solve(found, n) ? "I become the guy." : "Oh, my keyboard!")<<endl;
}