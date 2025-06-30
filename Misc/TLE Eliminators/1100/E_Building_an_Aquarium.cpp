#include <bits/stdc++.h>
using namespace std;

long long getArea(long long x, vector<long long>& v)
{
      long long area = 0;
      for(auto i : v)
      {
            if(x - i > 0) area += x - i;
      }

      return area;
}

int main()
{
      int t;
      cin>>t;
      while(t--)
      {
            int n, x;
            cin>>n>>x;
            vector<long long> heights(n);
            for(int i = 0; i < n; i++)
            {
                  cin>>heights[i];
                  
            }
            
            long long r = *max_element(heights.begin(), heights.end()) + x + 1, l = 0;
            long long m;
            long long ans = 0;
            while(l <= r)
            {
                  m = l + (r - l) / 2;
                  long long curArea = getArea(m, heights);

                  if(curArea <= x)
                  {
                        ans = m;
                        l = m + 1;
                  }
                  else
                  {
                        r = m - 1;
                  }
            }
            cout<<ans<<endl;
      }
}