#include <bits/stdc++.h>
using namespace std;

int main()
{
      int t;
      cin >> t;
      while (t--)
      {
            int n;
            cin >> n;
            vector<int> visits(n);
            for (int &i : visits)
                  cin >> i;

            // Store value and original index
            vector<pair<int, int>> sortedVisits;
            for (int i = 0; i < n; ++i)
                  sortedVisits.push_back({visits[i], i});

            // Sort by value descending
            sort(sortedVisits.begin(), sortedVisits.end(), greater<pair<int, int>>());

            vector<int> positions(n);
            long long time = 0;
            int inc = 1;

            for (int i = 0; i < n; ++i)
            {
                  if (i % 2 == 0 && i != 0)
                        inc++;

                  int pos = inc * (i % 2 == 0 ? 1 : -1);
                  positions[sortedVisits[i].second] = pos;
                  time += 1LL * abs(pos) * sortedVisits[i].first * 2;
            }

            cout << time << endl;
            cout << 0 << " ";
            for (int p : positions)
                  cout << p << " ";
            cout << endl;
      }
}