#include <bits/stdc++.h>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            unordered_map<char, int> chars;
            int n, k;
            cin >> n >> k;

            for (int i = 0; i < n; i++)
            {
                  char c;
                  cin >> c;
                  chars[c]++;
            }

            int countOdd = 0;
            for (auto i : chars)
            {
                  if (i.second % 2)
                  {
                        countOdd++;
                  }
            }

            cout << ((countOdd <= k + 1) ? "YES" : "NO") << endl;
      }
}