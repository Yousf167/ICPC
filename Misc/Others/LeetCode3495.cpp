#include <bits/stdc++.h>
using namespace std;
class Solution
{
      public:
      long long minOperations(vector<vector<int>>& queries)
      {
            int ans = 0;
            for(auto v : queries)
            {
                  ans += v[1] - v[0];
            }
            return ans;
      }
};