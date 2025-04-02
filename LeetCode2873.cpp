/*
Time: 0:30:24
Runtime: 0ms ??
Link: https://leetcode.com/problems/maximum-value-of-an-ordered-triplet-i/description/
Complexity: O(n^3)
Space Complexity: O(1)
*/
#include <bits/stdc++.h>
using namespace std;
class Solution
{
      public:
            long long maximumTripletValue(vector<int>& nums)
            {
                  long long max = 0;
                  int n = nums.size();
                  if(n == 3)
                  {
                        long long ans = (long long) (nums[0] - nums[1]) * nums[2];
                        return (ans >= 0 ? ans : 0);
                  }
                  for(int i = 0; i < n; i++)
                  {
                        for(int j = i + 1; j < n; j++)
                        {
                              for(int k = j + 1; k < n; k++)
                              {
                                    long long ans = (long long) (nums[i] - nums[j]) * nums[k];
                                    if(ans > max)
                                    {
                                          max = ans;
                                    }
                              }
                        }
                  }
                  return max;
            }
};