#include <bits/stdc++.h>
using namespace std;

int main()
{
      long long t;
      cin >> t;
      while (t--)
      {
            long long n;
            cin >> n;
            vector<long long> second_elements;
            long long lowest_first_minimum = INT_MAX;
            for (long long i = 0; i < n; i++)
            {
                  long long m;
                  cin >> m;
                  vector<long long> a(m);
                  for (long long j = 0; j < m; j++)
                  {
                        cin >> a[j];
                  }
                  sort(a.begin(), a.end());
                  second_elements.push_back(a[1]);
                  lowest_first_minimum = min(lowest_first_minimum, a[0]);
            }

            sort(second_elements.begin(), second_elements.end());
            long long sum = accumulate(second_elements.begin(), second_elements.end(), 0LL);
            long long lowest_second_minimum = second_elements[0];
            long long ans = lowest_first_minimum + sum - lowest_second_minimum;
            cout<<ans<<endl;
      }
      return 0;
}