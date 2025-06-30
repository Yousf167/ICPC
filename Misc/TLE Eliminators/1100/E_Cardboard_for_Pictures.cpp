#include <bits/stdc++.h>
using namespace std;

unsigned long long cAt(long long w, vector<long long> &s)
{
      unsigned long long sum = 0;
      for (auto i : s)
      {
            sum += (i + 2 * w) * (i + 2 * w);
            if (sum > 1e18)
                  break;
      }
      return sum;
}

int main()
{
      ios_base::sync_with_stdio(false);
      cin.tie(NULL);

      int t;
      cin >> t;
      while (t--)
      {
            long long n, c;
            cin >> n >> c;
            vector<long long> s(n);
            for (auto &i : s) cin >> i;

            long long l = 0, r = 1e9, ans = 0;
            while (l <= r)
            {
                  long long m = l + (r - l) / 2;
                  unsigned long long val = cAt(m, s);

                  if (val == c)
                  {
                        ans = m;
                        break;
                  }
                  else if (val < c)
                  {
                        l = m + 1;
                  }
                  else
                  {
                        r = m - 1;
                  }
            }
            cout << ans << "\n";
      }
      return 0;
}