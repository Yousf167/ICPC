#include <bits/stdc++.h>
using namespace std;

int main() {
      int n;
      cin >> n;
      vector<int> a(n);
      unordered_map<int, int> freq;

      for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freq[a[i]]++;
      }

      // Use a set to extract unique elements
      set<int> unique_set(a.begin(), a.end());
      vector<int> unique(unique_set.begin(), unique_set.end());

      // Sort using custom comparator
      sort(unique.begin(), unique.end(), [&](int x, int y) {
            if (freq[x] != freq[y]) return freq[x] > freq[y]; // Higher frequency first
            return x < y; // If tie, smaller element first
      });

      for (int num : unique)
            cout << num << " ";
      cout << endl;

      return 0;
}
