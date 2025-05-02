#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
      long long countFairPairs(vector<int>& nums, int lower, int upper)
      {
            int count = 0;
            for(int i = 0; i < nums.size(); i++)
            {
                  for(int j = i + 1; j < nums.size(); j++)
                  {
                        int sum = nums[i] + nums[j];
                        if(lower <= sum && sum <= upper)
                        {
                              count++;
                        }
                  }
            }
            return count;
      }
};



int main()
{
}