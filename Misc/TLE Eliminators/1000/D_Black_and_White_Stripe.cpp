#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<char> strip(n);
        for (int i = 0; i < n; i++) cin >> strip[i];

        vector<int> WCPrefix(n);
        for (int i = 0; i < n; i++)
        {
            WCPrefix[i] = (i > 0 ? WCPrefix[i - 1] : 0) + (strip[i] == 'W' ? 1 : 0);
        }

        int minChanges = INT_MAX;
        for (int i = 0; i + k - 1 < n; i++)
        {
            int j = i + k - 1;
            int numW = WCPrefix[j] - (i > 0 ? WCPrefix[i - 1] : 0);
            minChanges = min(minChanges, numW);
        }
        cout << minChanges << endl;
    }
}