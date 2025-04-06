/*
Solution Time: 1:10:16
Runtime: 0 ms ??
Link: https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
Complexity: O(log(n))
*/

#include <iostream>
#include <vector>
using namespace std;


class Solution {
      
      public:

      int getLeft(vector<int>& nums, int target)
      {
            int m;
            int l = 0;
            int r = nums.size() - 1;
            while(r >= l)
            {
                  m = l + (r - l) / 2;
                  if(nums[m] < target)
                  {
                        l = m + 1;
                  }
                  else
                  {
                        r = m - 1;
                  }
            }
            return l;
      }


      int getRight(vector<int>& nums, int target)
      {
            int m;
            int l = 0;
            int r = nums.size() - 1;
            while(l <= r)
            {
                  m = l + (r - l) / 2;
                  if(nums[m] > target)
                  {
                        r = m - 1;
                  }
                  else
                  {
                        l = m + 1;
                  }
            }
            return r;
      }



      vector<int> searchRange(vector<int>& nums, int target) 
      {
            if(nums.empty() || target > *nums.rbegin() || target < *nums.begin())
            {
                  return {-1,-1};
            }
            int left = getLeft(nums, target);
            int right = getRight(nums, target);
      
            if (left <= right && left < nums.size() && nums[left] == target) 
            {
                  return {left, right};
            }
            return {-1, -1};
      }
};

int main()
{
      vector<int> v = {};
      Solution s;
      auto ans = s.searchRange(v, 3);
      for(auto i : ans)
      {
            cout<<i<<"\n";
      }
}